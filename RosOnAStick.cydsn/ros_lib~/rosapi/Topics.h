#ifndef _ROS_SERVICE_Topics_h
#define _ROS_SERVICE_Topics_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace rosapi
{

static const char TOPICS[] = "rosapi/Topics";

  class TopicsRequest : public ros::Msg
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

    const char * getType(){ return TOPICS; };
    const char * getMD5(){ return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class TopicsResponse : public ros::Msg
  {
    public:
      uint8_t topics_length;
      char* st_topics;
      char* * topics;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_SERIALIZE
      *(outbuffer + offset++) = topics_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < topics_length; i++){
      uint32_t length_topicsi = strlen( (const char*) this->topics[i]);
      memcpy(outbuffer + offset, &length_topicsi, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->topics[i], length_topicsi);
      offset += length_topicsi;
      }
#endif
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_DESERIALIZE
      uint8_t topics_lengthT = *(inbuffer + offset++);
      if(topics_lengthT < topics_length)
        topics_length = topics_lengthT;
      offset += 3;
      for( uint8_t i = 0; i < topics_lengthT; i++){
      uint32_t length_st_topics;
      memcpy(&length_st_topics, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_topics; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_topics-1]=0;
      this->st_topics = (char *)(inbuffer + offset-1);
      offset += length_st_topics;
      if (i < topics_length) {
          memcpy( &(this->topics[i]), &(this->st_topics), sizeof(char*));
      }
      }
#endif
     return offset;
    }

    const char * getType(){ return TOPICS; };
    const char * getMD5(){ return "b0eef9a05d4e829092fc2f2c3c2aad3d"; };

  };

  class Topics {
    public:
    typedef TopicsRequest Request;
    typedef TopicsResponse Response;
  };

}
#endif
