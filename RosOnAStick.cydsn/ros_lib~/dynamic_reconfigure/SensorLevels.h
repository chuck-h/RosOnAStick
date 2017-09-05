#ifndef _ROS_dynamic_reconfigure_SensorLevels_h
#define _ROS_dynamic_reconfigure_SensorLevels_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace dynamic_reconfigure
{

  class SensorLevels : public ros::Msg
  {
    public:
      enum { RECONFIGURE_CLOSE =  3   };
      enum { RECONFIGURE_STOP =  1   };
      enum { RECONFIGURE_RUNNING =  0  };

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

    const char * getType(){ return "dynamic_reconfigure/SensorLevels"; };
    const char * getMD5(){ return "6322637bee96d5489db6e2127c47602c"; };

  };

}
#endif