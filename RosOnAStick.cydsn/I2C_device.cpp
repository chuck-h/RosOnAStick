/* 
 * rosserial I2C access for PSoC4
 * 
 * read/write to I2C device
 *
 * Copyright C Harrison 2017
 * BSD 2-clause license http://opensource.org/licenses/BSD-2-Clause
 *
 */


extern "C" {
#include "project.h"
}
#include <ros.h>
#include <std_msgs/UInt8MultiArray.h>
#include "I2C_device.h"


extern ros::NodeHandle node_handle;

namespace I2C_device {


#define MAX_REPLY_BYTES 8
std_msgs::UInt8MultiArray reply_msg;
std_msgs::MultiArrayDimension reply_dim[1];
uint8_t reply_data[MAX_REPLY_BYTES];
ros::Publisher reply_pub("i2c_reply", &reply_msg);

uint8_t i2caddr;
uint8_t max_readback_bytes;
enum {
  state_idle,
  state_writing,
  state_read_setup,
  state_reading
} state;

#define MAX_CMD_BYTES MAX_REPLY_BYTES
// typ write message array: <7-bit I2C wrt addr><data addr>[<data byte>...]
void writeMessageCb(const std_msgs::UInt8MultiArray& msg) {
    uint32_t status = 
      I2CMaster_I2CMasterWriteBuf(msg.data[0], msg.data+1, msg.data_len-1,
                                  I2CMaster_I2C_MODE_COMPLETE_XFER | I2CMaster_I2CMODE_START);
    if (status == I2CMaster_I2C_MSTR_NO_ERROR) {
        state = state_writing;
    }
    // restore cmd msg buffer max size
    const_cast<std_msgs::UInt8MultiArray&>(msg).data_length = MAX_CMD_BYTES;
}
// typ read message array <7-bit I2C addr><data addr><max num readback bytes>
//  If message array is 2 bytes long, <data_addr> is assumed absent and simple read op is performed
void readMessageCb(const std_msgs::UInt8MultiArray& msg) {
    if (msg.data_length < 2) { return; } // invalid message
    max_readback_bytes = msg.data[msg.data_len-1];
    i2caddr = msg.data[0];
    if (msg.data_len > 2) { // do write address cycle
        uint32_t status = 
          I2CMaster_I2CMasterWriteBuf(i2caddr, msg.data+1, msg.data_len-2, I2CMaster_I2C_MODE_NO_STOP);
        if (status == I2CMaster_I2C_MSTR_NO_ERROR) {
            state = state_read_setup;
        }
    } else { // simple read operation
        uint32_t status = I2CMaster_I2CMasterReadBuf(i2caddr, reply_msg.data, max_readback_bytes,
                                    I2CMaster_I2C_MODE_COMPLETE_XFER | I2CMaster_I2CMODE_START);
        if (status == I2CMaster_I2C_MSTR_NO_ERROR) {
            state = state_reading;
    }
    // restore cmd msg buffer max size
    const_cast<std_msgs::UInt8MultiArray&>(msg).data_length = MAX_CMD_BYTES;
}

ros::Subscriber<std_msgs::UInt8MultiArray> cmd_sub_w("i2c_write", &writeMessageCb);
ros::Subscriber<std_msgs::UInt8MultiArray> cmd_sub_r("i2c_read", &readMessageCb);
std_msgs::MultiArrayDimension cmd_dim[1];
uint8_t cmd_data[MAX_CMD_BYTES]; 

void setup() {

    I2CMaster_Start();
	// initialize 1-dimensional array message for SPI data reply
	reply_msg.layout.dim_length = 1;
	reply_msg.layout.data_offset = 0;
	reply_msg.layout.dim = reply_dim;
	reply_msg.layout.dim[0].label = const_cast<char*>("reply");
	reply_msg.layout.dim[0].size = 0;
	reply_msg.layout.dim[0].stride = MAX_REPLY_BYTES;
	reply_msg.data = reply_data;
	reply_msg.data_length = MAX_REPLY_BYTES;
	reply_ready = false;
	node_handle.advertise(reply_pub);
    // attach message storage to I2C command messages & set max size
    cmd_sub_w.msg.data = cmd_data;
    cmd_sub_w.msg.data_length = MAX_CMD_BYTES;
    cmd_sub_w.msg.layout.dim = cmd_dim;
    cmd_sub_w.msg.layout.dim_length = 1;
	node_handle.subscribe(cmd_sub_w);
    cmd_sub_r.msg.data = cmd_data;
    cmd_sub_r.msg.data_length = MAX_CMD_BYTES;
    cmd_sub_r.msg.layout.dim = cmd_dim;
    cmd_sub_r.msg.layout.dim_length = 1;
	node_handle.subscribe(cmd_sub_r);
}

void loop() {

    if(state==read_setup && I2CMaster_I2CMasterStatus()==I2CMaster_I2C_MSTAT_WR_CMPLT) {
        // read transfer setup phase complete; start read data transfer
        uint32_t status = I2CMaster_I2CMasterReadBuf(i2caddr, reply_msg.data, max_readback_bytes,
                             I2CMaster_I2C_MODE_COMPLETE_XFER | I2CMaster_I2CMODE_REPEAT_START);
        if (status == I2CMaster_I2C_MSTR_NO_ERROR) {
            state = state_reading;
        }
        I2CMaster_I2CMasterClearStatus();
    } else if (state==state_reading && I2CMaster_I2CMasterStatus()==I2CMaster_I2C_MSTAT_RD_CMPLT) {
        // read operation is complete; publish reply
	    reply_msg.data_length = I2CMaster_I2CMasterGetReadBufSize();
        I2CMaster_I2CMasterClearReadBufSize();
	    reply_msg.layout.dim[0].size = reply_msg.data_length;
		reply_pub.publish(&reply_msg);
		reply_msg.data_length = MAX_REPLY_BYTES;
		state = state_idle;
        I2CMaster_I2CMasterClearStatus();
	} else if (state==state_writing && I2CMaster_I2CMasterStatus()==I2CMaster_I2C_MSTAT_WR_CMPLT) {
        // write operation is complete
        state = state_idle;
        I2CMaster_I2CMasterClearStatus();
    }
    
        
 }

} // namespace I2C_device

/* [] END OF FILE */
