/* include file for rosserial I2C_device 
 *
 */

#ifndef I2C_DEVICE_H
#define I2C_DEVICE_H

extern "C" {
#include "project.h"
}

namespace I2C_device {
   
extern void setup();
extern bool Tx_empty();
extern void write(const uint8_t device, const uint8_t* buf, const uint8_t len);
extern uint8_t read(uint8_t* buf, uint8_t buf_size);
extern void loop();


} // namespace I2C_device
#endif
