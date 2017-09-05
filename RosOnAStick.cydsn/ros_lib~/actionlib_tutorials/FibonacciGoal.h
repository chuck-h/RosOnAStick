#ifndef _ROS_actionlib_tutorials_FibonacciGoal_h
#define _ROS_actionlib_tutorials_FibonacciGoal_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace actionlib_tutorials
{

  class FibonacciGoal : public ros::Msg
  {
    public:
      int32_t order;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_SERIALIZE
      union {
        int32_t real;
        uint32_t base;
      } u_order;
      u_order.real = this->order;
      *(outbuffer + offset + 0) = (u_order.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_order.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_order.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_order.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->order);
#endif
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_DESERIALIZE
      union {
        int32_t real;
        uint32_t base;
      } u_order;
      u_order.base = 0;
      u_order.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_order.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_order.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_order.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->order = u_order.real;
      offset += sizeof(this->order);
#endif
     return offset;
    }

    const char * getType(){ return "actionlib_tutorials/FibonacciGoal"; };
    const char * getMD5(){ return "6889063349a00b249bd1661df429d822"; };

  };

}
#endif