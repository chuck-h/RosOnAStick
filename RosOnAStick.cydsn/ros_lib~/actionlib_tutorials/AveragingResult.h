#ifndef _ROS_actionlib_tutorials_AveragingResult_h
#define _ROS_actionlib_tutorials_AveragingResult_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace actionlib_tutorials
{

  class AveragingResult : public ros::Msg
  {
    public:
      float mean;
      float std_dev;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_SERIALIZE
      union {
        float real;
        uint32_t base;
      } u_mean;
      u_mean.real = this->mean;
      *(outbuffer + offset + 0) = (u_mean.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_mean.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_mean.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_mean.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->mean);
      union {
        float real;
        uint32_t base;
      } u_std_dev;
      u_std_dev.real = this->std_dev;
      *(outbuffer + offset + 0) = (u_std_dev.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_std_dev.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_std_dev.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_std_dev.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->std_dev);
#endif
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_DESERIALIZE
      union {
        float real;
        uint32_t base;
      } u_mean;
      u_mean.base = 0;
      u_mean.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_mean.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_mean.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_mean.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->mean = u_mean.real;
      offset += sizeof(this->mean);
      union {
        float real;
        uint32_t base;
      } u_std_dev;
      u_std_dev.base = 0;
      u_std_dev.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_std_dev.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_std_dev.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_std_dev.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->std_dev = u_std_dev.real;
      offset += sizeof(this->std_dev);
#endif
     return offset;
    }

    const char * getType(){ return "actionlib_tutorials/AveragingResult"; };
    const char * getMD5(){ return "d5c7decf6df75ffb4367a05c1bcc7612"; };

  };

}
#endif