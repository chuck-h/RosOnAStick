#ifndef _ROS_geometry_msgs_Transform_h
#define _ROS_geometry_msgs_Transform_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "geometry_msgs/Vector3.h"
#include "geometry_msgs/Quaternion.h"

namespace geometry_msgs
{

  class Transform : public ros::Msg
  {
    public:
      geometry_msgs::Vector3 translation;
      geometry_msgs::Quaternion rotation;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_SERIALIZE
      offset += this->translation.serialize(outbuffer + offset);
      offset += this->rotation.serialize(outbuffer + offset);
#endif
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_DESERIALIZE
      offset += this->translation.deserialize(inbuffer + offset);
      offset += this->rotation.deserialize(inbuffer + offset);
#endif
     return offset;
    }

    const char * getType(){ return "geometry_msgs/Transform"; };
    const char * getMD5(){ return "ac9eff44abf714214112b05d54a3cf9b"; };

  };

}
#endif