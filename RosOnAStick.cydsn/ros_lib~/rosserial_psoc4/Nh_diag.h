#ifndef _ROS_rosserial_psoc4_Nh_diag_h
#define _ROS_rosserial_psoc4_Nh_diag_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace rosserial_psoc4
{

  class Nh_diag : public ros::Msg
  {
    public:
      uint16_t nh_diag[8];

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_SERIALIZE
      for( uint8_t i = 0; i < 8; i++){
      *(outbuffer + offset + 0) = (this->nh_diag[i] >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->nh_diag[i] >> (8 * 1)) & 0xFF;
      offset += sizeof(this->nh_diag[i]);
      }
#endif
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_DESERIALIZE
      for( uint8_t i = 0; i < 8; i++){
      this->nh_diag[i] =  ((uint16_t) (*(inbuffer + offset)));
      this->nh_diag[i] |= ((uint16_t) (*(inbuffer + offset + 1))) << (8 * 1);
      offset += sizeof(this->nh_diag[i]);
      }
#endif
     return offset;
    }

    const char * getType(){ return "rosserial_psoc4/Nh_diag"; };
    const char * getMD5(){ return "193926f8009f338dea9f4f09f8eab4fe"; };

  };

}
#endif