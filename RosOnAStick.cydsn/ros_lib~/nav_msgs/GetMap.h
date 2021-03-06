#ifndef _ROS_SERVICE_GetMap_h
#define _ROS_SERVICE_GetMap_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "nav_msgs/OccupancyGrid.h"

namespace nav_msgs
{

static const char GETMAP[] = "nav_msgs/GetMap";

  class GetMapRequest : public ros::Msg
  {
    public:

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_SERIALIZE
#endif
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_DESERIALIZE
#endif
     return offset;
    }

    const char * getType(){ return GETMAP; };
    const char * getMD5(){ return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class GetMapResponse : public ros::Msg
  {
    public:
      nav_msgs::OccupancyGrid map;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_SERIALIZE
      offset += this->map.serialize(outbuffer + offset);
#endif
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_DESERIALIZE
      offset += this->map.deserialize(inbuffer + offset);
#endif
     return offset;
    }

    const char * getType(){ return GETMAP; };
    const char * getMD5(){ return "6cdd0a18e0aff5b0a3ca2326a89b54ff"; };

  };

  class GetMap {
    public:
    typedef GetMapRequest Request;
    typedef GetMapResponse Response;
  };

}
#endif
