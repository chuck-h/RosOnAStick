#ifndef _ROS_SERVICE_FrameGraph_h
#define _ROS_SERVICE_FrameGraph_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace tf
{

static const char FRAMEGRAPH[] = "tf/FrameGraph";

  class FrameGraphRequest : public ros::Msg
  {
    public:

    FrameGraphRequest()
    {
    }

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

    const char * getType(){ return FRAMEGRAPH; };
    const char * getMD5(){ return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class FrameGraphResponse : public ros::Msg
  {
    public:
      const char* dot_graph;

    FrameGraphResponse():
      dot_graph("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_SERIALIZE
      uint32_t length_dot_graph = strlen( (const char*) this->dot_graph);
      memcpy(outbuffer + offset, &length_dot_graph, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->dot_graph, length_dot_graph);
      offset += length_dot_graph;
#endif
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_DESERIALIZE
      uint32_t length_dot_graph;
      memcpy(&length_dot_graph, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_dot_graph; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_dot_graph-1]=0;
      this->dot_graph = (char *)(inbuffer + offset-1);
      offset += length_dot_graph;
#endif
     return offset;
    }

    const char * getType(){ return FRAMEGRAPH; };
    const char * getMD5(){ return "c4af9ac907e58e906eb0b6e3c58478c0"; };

  };

  class FrameGraph {
    public:
    typedef FrameGraphRequest Request;
    typedef FrameGraphResponse Response;
  };

}
#endif
