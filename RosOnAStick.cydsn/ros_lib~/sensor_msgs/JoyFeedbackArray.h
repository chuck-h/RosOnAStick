#ifndef _ROS_sensor_msgs_JoyFeedbackArray_h
#define _ROS_sensor_msgs_JoyFeedbackArray_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "sensor_msgs/JoyFeedback.h"

namespace sensor_msgs
{

  class JoyFeedbackArray : public ros::Msg
  {
    public:
      uint8_t array_length;
      sensor_msgs::JoyFeedback st_array;
      sensor_msgs::JoyFeedback * array;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_SERIALIZE
      *(outbuffer + offset++) = array_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < array_length; i++){
      offset += this->array[i].serialize(outbuffer + offset);
      }
#endif
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_DESERIALIZE
      uint8_t array_lengthT = *(inbuffer + offset++);
      if(array_lengthT < array_length)
        array_length = array_lengthT;
      offset += 3;
      for( uint8_t i = 0; i < array_lengthT; i++){
      offset += this->st_array.deserialize(inbuffer + offset);
      if (i < array_length) {
          memcpy( &(this->array[i]), &(this->st_array), sizeof(sensor_msgs::JoyFeedback));
      }
      }
#endif
     return offset;
    }

    const char * getType(){ return "sensor_msgs/JoyFeedbackArray"; };
    const char * getMD5(){ return "cde5730a895b1fc4dee6f91b754b213d"; };

  };

}
#endif