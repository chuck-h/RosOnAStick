#ifndef _ROS_geometry_msgs_PoseStamped_h
#define _ROS_geometry_msgs_PoseStamped_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "geometry_msgs/Pose.h"

namespace geometry_msgs
{

  class PoseStamped : public ros::Msg
  {
    public:
      std_msgs::Header header;
      geometry_msgs::Pose pose;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_SERIALIZE
      offset += this->header.serialize(outbuffer + offset);
      offset += this->pose.serialize(outbuffer + offset);
#endif
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_DESERIALIZE
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->pose.deserialize(inbuffer + offset);
#endif
     return offset;
    }

    const char * getType(){ return "geometry_msgs/PoseStamped"; };
    const char * getMD5(){ return "d3812c3cbc69362b77dc0b19b345f8f5"; };

  };

}
#endif