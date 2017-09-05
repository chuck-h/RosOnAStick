#ifndef _ROS_std_msgs_Float32MultiArray_h
#define _ROS_std_msgs_Float32MultiArray_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/MultiArrayLayout.h"

namespace std_msgs
{

  class Float32MultiArray : public ros::Msg
  {
    public:
      std_msgs::MultiArrayLayout layout;
      uint8_t data_length;
      float st_data;
      float * data;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_SERIALIZE
      offset += this->layout.serialize(outbuffer + offset);
      *(outbuffer + offset++) = data_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < data_length; i++){
      union {
        float real;
        uint32_t base;
      } u_datai;
      u_datai.real = this->data[i];
      *(outbuffer + offset + 0) = (u_datai.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_datai.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_datai.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_datai.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->data[i]);
      }
#endif
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_DESERIALIZE
      offset += this->layout.deserialize(inbuffer + offset);
      uint8_t data_lengthT = *(inbuffer + offset++);
      if(data_lengthT < data_length)
        data_length = data_lengthT;
      offset += 3;
      for( uint8_t i = 0; i < data_lengthT; i++){
      union {
        float real;
        uint32_t base;
      } u_st_data;
      u_st_data.base = 0;
      u_st_data.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_data.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_data.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_data.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_data = u_st_data.real;
      offset += sizeof(this->st_data);
      if (i < data_length) {
          memcpy( &(this->data[i]), &(this->st_data), sizeof(float));
      }
      }
#endif
     return offset;
    }

    const char * getType(){ return "std_msgs/Float32MultiArray"; };
    const char * getMD5(){ return "6a40e0ffa6a17a503ac3f8616991b1f6"; };

  };

}
#endif