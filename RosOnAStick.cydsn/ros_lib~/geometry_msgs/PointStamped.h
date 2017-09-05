#ifndef _ROS_geometry_msgs_PointStamped_h
#define _ROS_geometry_msgs_PointStamped_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "geometry_msgs/Point.h"

namespace geometry_msgs
{

  class PointStamped : public ros::Msg
  {
    public:
      std_msgs::Header header;
      geometry_msgs::Point point;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_SERIALIZE
      offset += this->header.serialize(outbuffer + offset);
      offset += this->point.serialize(outbuffer + offset);
#endif
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_DESERIALIZE
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->point.deserialize(inbuffer + offset);
#endif
     return offset;
    }

    const char * getType(){ return "geometry_msgs/PointStamped"; };
    const char * getMD5(){ return "c63aecb41bfdfd6b7e1fac37c7cbe7bf"; };

  };

}
#endif