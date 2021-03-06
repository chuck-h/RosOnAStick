#ifndef _ROS_SERVICE_MuxDelete_h
#define _ROS_SERVICE_MuxDelete_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace topic_tools
{

static const char MUXDELETE[] = "topic_tools/MuxDelete";

  class MuxDeleteRequest : public ros::Msg
  {
    public:
      char * topic;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_SERIALIZE
      uint32_t length_topic = strlen( (const char*) this->topic);
      memcpy(outbuffer + offset, &length_topic, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->topic, length_topic);
      offset += length_topic;
#endif
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_DESERIALIZE
      uint32_t length_topic;
      memcpy(&length_topic, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_topic; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_topic-1]=0;
      this->topic = (char *)(inbuffer + offset-1);
      offset += length_topic;
#endif
     return offset;
    }

    const char * getType(){ return MUXDELETE; };
    const char * getMD5(){ return "d8f94bae31b356b24d0427f80426d0c3"; };

  };

  class MuxDeleteResponse : public ros::Msg
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

    const char * getType(){ return MUXDELETE; };
    const char * getMD5(){ return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class MuxDelete {
    public:
    typedef MuxDeleteRequest Request;
    typedef MuxDeleteResponse Response;
  };

}
#endif
