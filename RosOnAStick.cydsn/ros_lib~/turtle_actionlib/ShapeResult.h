#ifndef _ROS_turtle_actionlib_ShapeResult_h
#define _ROS_turtle_actionlib_ShapeResult_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace turtle_actionlib
{

  class ShapeResult : public ros::Msg
  {
    public:
      float interior_angle;
      float apothem;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_SERIALIZE
      union {
        float real;
        uint32_t base;
      } u_interior_angle;
      u_interior_angle.real = this->interior_angle;
      *(outbuffer + offset + 0) = (u_interior_angle.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_interior_angle.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_interior_angle.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_interior_angle.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->interior_angle);
      union {
        float real;
        uint32_t base;
      } u_apothem;
      u_apothem.real = this->apothem;
      *(outbuffer + offset + 0) = (u_apothem.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_apothem.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_apothem.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_apothem.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->apothem);
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
      } u_interior_angle;
      u_interior_angle.base = 0;
      u_interior_angle.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_interior_angle.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_interior_angle.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_interior_angle.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->interior_angle = u_interior_angle.real;
      offset += sizeof(this->interior_angle);
      union {
        float real;
        uint32_t base;
      } u_apothem;
      u_apothem.base = 0;
      u_apothem.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_apothem.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_apothem.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_apothem.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->apothem = u_apothem.real;
      offset += sizeof(this->apothem);
#endif
     return offset;
    }

    const char * getType(){ return "turtle_actionlib/ShapeResult"; };
    const char * getMD5(){ return "b06c6e2225f820dbc644270387cd1a7c"; };

  };

}
#endif