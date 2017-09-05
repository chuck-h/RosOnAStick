#ifndef _ROS_wiimote_TimedSwitch_h
#define _ROS_wiimote_TimedSwitch_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace wiimote
{

  class TimedSwitch : public ros::Msg
  {
    public:
      int8_t switch_mode;
      int32_t num_cycles;
      uint8_t pulse_pattern_length;
      float st_pulse_pattern;
      float * pulse_pattern;
      enum { ON =   1 };
      enum { OFF =   0 };
      enum { NO_CHANGE =  -2 };
      enum { REPEAT =  -1 };
      enum { FOREVER =  -1 };

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_SERIALIZE
      union {
        int8_t real;
        uint8_t base;
      } u_switch_mode;
      u_switch_mode.real = this->switch_mode;
      *(outbuffer + offset + 0) = (u_switch_mode.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->switch_mode);
      union {
        int32_t real;
        uint32_t base;
      } u_num_cycles;
      u_num_cycles.real = this->num_cycles;
      *(outbuffer + offset + 0) = (u_num_cycles.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_num_cycles.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_num_cycles.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_num_cycles.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->num_cycles);
      *(outbuffer + offset++) = pulse_pattern_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < pulse_pattern_length; i++){
      union {
        float real;
        uint32_t base;
      } u_pulse_patterni;
      u_pulse_patterni.real = this->pulse_pattern[i];
      *(outbuffer + offset + 0) = (u_pulse_patterni.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_pulse_patterni.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_pulse_patterni.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_pulse_patterni.base >> (8 * 3)) & 0xFF;
      offset += sizeof(this->pulse_pattern[i]);
      }
#endif
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_DESERIALIZE
      union {
        int8_t real;
        uint8_t base;
      } u_switch_mode;
      u_switch_mode.base = 0;
      u_switch_mode.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->switch_mode = u_switch_mode.real;
      offset += sizeof(this->switch_mode);
      union {
        int32_t real;
        uint32_t base;
      } u_num_cycles;
      u_num_cycles.base = 0;
      u_num_cycles.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_num_cycles.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_num_cycles.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_num_cycles.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->num_cycles = u_num_cycles.real;
      offset += sizeof(this->num_cycles);
      uint8_t pulse_pattern_lengthT = *(inbuffer + offset++);
      if(pulse_pattern_lengthT < pulse_pattern_length)
        pulse_pattern_length = pulse_pattern_lengthT;
      offset += 3;
      for( uint8_t i = 0; i < pulse_pattern_lengthT; i++){
      union {
        float real;
        uint32_t base;
      } u_st_pulse_pattern;
      u_st_pulse_pattern.base = 0;
      u_st_pulse_pattern.base |= ((uint32_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_st_pulse_pattern.base |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_st_pulse_pattern.base |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_st_pulse_pattern.base |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      this->st_pulse_pattern = u_st_pulse_pattern.real;
      offset += sizeof(this->st_pulse_pattern);
      if (i < pulse_pattern_length) {
          memcpy( &(this->pulse_pattern[i]), &(this->st_pulse_pattern), sizeof(float));
      }
      }
#endif
     return offset;
    }

    const char * getType(){ return "wiimote/TimedSwitch"; };
    const char * getMD5(){ return "e4c8d9327409cef6066fa6c368032c1e"; };

  };

}
#endif