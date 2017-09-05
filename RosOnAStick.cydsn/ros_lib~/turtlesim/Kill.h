#ifndef _ROS_SERVICE_Kill_h
#define _ROS_SERVICE_Kill_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace turtlesim
{

static const char KILL[] = "turtlesim/Kill";

  class KillRequest : public ros::Msg
  {
    public:
      char * name;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_SERIALIZE
      uint32_t length_name = strlen( (const char*) this->name);
      memcpy(outbuffer + offset, &length_name, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->name, length_name);
      offset += length_name;
#endif
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_DESERIALIZE
      uint32_t length_name;
      memcpy(&length_name, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_name; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_name-1]=0;
      this->name = (char *)(inbuffer + offset-1);
      offset += length_name;
#endif
     return offset;
    }

    const char * getType(){ return KILL; };
    const char * getMD5(){ return "c1f3d28f1b044c871e6eff2e9fc3c667"; };

  };

  class KillResponse : public ros::Msg
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

    const char * getType(){ return KILL; };
    const char * getMD5(){ return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class Kill {
    public:
    typedef KillRequest Request;
    typedef KillResponse Response;
  };

}
#endif