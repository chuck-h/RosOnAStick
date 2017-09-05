#ifndef _ROS_sensor_msgs_JointState_h
#define _ROS_sensor_msgs_JointState_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"

namespace sensor_msgs
{

  class JointState : public ros::Msg
  {
    public:
      std_msgs::Header header;
      uint8_t name_length;
      char* st_name;
      char* * name;
      uint8_t position_length;
      float st_position;
      float * position;
      uint8_t velocity_length;
      float st_velocity;
      float * velocity;
      uint8_t effort_length;
      float st_effort;
      float * effort;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_SERIALIZE
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset++) = name_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < name_length; i++){
      uint32_t length_namei = strlen( (const char*) this->name[i]);
      memcpy(outbuffer + offset, &length_namei, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->name[i], length_namei);
      offset += length_namei;
      }
      *(outbuffer + offset++) = position_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < position_length; i++){
      int32_t * val_positioni = (int32_t *) &(this->position[i]);
      int32_t exp_positioni = (((*val_positioni)>>23)&255);
      if(exp_positioni != 0)
        exp_positioni += 1023-127;
      int32_t sig_positioni = *val_positioni;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_positioni<<5) & 0xff;
      *(outbuffer + offset++) = (sig_positioni>>3) & 0xff;
      *(outbuffer + offset++) = (sig_positioni>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_positioni<<4) & 0xF0) | ((sig_positioni>>19)&0x0F);
      *(outbuffer + offset++) = (exp_positioni>>4) & 0x7F;
      if(this->position[i] < 0) *(outbuffer + offset -1) |= 0x80;
      }
      *(outbuffer + offset++) = velocity_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < velocity_length; i++){
      int32_t * val_velocityi = (int32_t *) &(this->velocity[i]);
      int32_t exp_velocityi = (((*val_velocityi)>>23)&255);
      if(exp_velocityi != 0)
        exp_velocityi += 1023-127;
      int32_t sig_velocityi = *val_velocityi;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_velocityi<<5) & 0xff;
      *(outbuffer + offset++) = (sig_velocityi>>3) & 0xff;
      *(outbuffer + offset++) = (sig_velocityi>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_velocityi<<4) & 0xF0) | ((sig_velocityi>>19)&0x0F);
      *(outbuffer + offset++) = (exp_velocityi>>4) & 0x7F;
      if(this->velocity[i] < 0) *(outbuffer + offset -1) |= 0x80;
      }
      *(outbuffer + offset++) = effort_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < effort_length; i++){
      int32_t * val_efforti = (int32_t *) &(this->effort[i]);
      int32_t exp_efforti = (((*val_efforti)>>23)&255);
      if(exp_efforti != 0)
        exp_efforti += 1023-127;
      int32_t sig_efforti = *val_efforti;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = (sig_efforti<<5) & 0xff;
      *(outbuffer + offset++) = (sig_efforti>>3) & 0xff;
      *(outbuffer + offset++) = (sig_efforti>>11) & 0xff;
      *(outbuffer + offset++) = ((exp_efforti<<4) & 0xF0) | ((sig_efforti>>19)&0x0F);
      *(outbuffer + offset++) = (exp_efforti>>4) & 0x7F;
      if(this->effort[i] < 0) *(outbuffer + offset -1) |= 0x80;
      }
#endif
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_DESERIALIZE
      offset += this->header.deserialize(inbuffer + offset);
      uint8_t name_lengthT = *(inbuffer + offset++);
      if(name_lengthT < name_length)
        name_length = name_lengthT;
      offset += 3;
      for( uint8_t i = 0; i < name_lengthT; i++){
      uint32_t length_st_name;
      memcpy(&length_st_name, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_name; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_name-1]=0;
      this->st_name = (char *)(inbuffer + offset-1);
      offset += length_st_name;
      if (i < name_length) {
          memcpy( &(this->name[i]), &(this->st_name), sizeof(char*));
      }
      }
      uint8_t position_lengthT = *(inbuffer + offset++);
      if(position_lengthT < position_length)
        position_length = position_lengthT;
      offset += 3;
      for( uint8_t i = 0; i < position_lengthT; i++){
      uint32_t * val_st_position = (uint32_t*) &(this->st_position);
      offset += 3;
      *val_st_position = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_st_position |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_st_position |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_st_position |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_st_position = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_st_position |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_st_position !=0)
        *val_st_position |= ((exp_st_position)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->st_position = -this->st_position;
      if (i < position_length) {
          memcpy( &(this->position[i]), &(this->st_position), sizeof(float));
      }
      }
      uint8_t velocity_lengthT = *(inbuffer + offset++);
      if(velocity_lengthT < velocity_length)
        velocity_length = velocity_lengthT;
      offset += 3;
      for( uint8_t i = 0; i < velocity_lengthT; i++){
      uint32_t * val_st_velocity = (uint32_t*) &(this->st_velocity);
      offset += 3;
      *val_st_velocity = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_st_velocity |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_st_velocity |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_st_velocity |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_st_velocity = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_st_velocity |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_st_velocity !=0)
        *val_st_velocity |= ((exp_st_velocity)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->st_velocity = -this->st_velocity;
      if (i < velocity_length) {
          memcpy( &(this->velocity[i]), &(this->st_velocity), sizeof(float));
      }
      }
      uint8_t effort_lengthT = *(inbuffer + offset++);
      if(effort_lengthT < effort_length)
        effort_length = effort_lengthT;
      offset += 3;
      for( uint8_t i = 0; i < effort_lengthT; i++){
      uint32_t * val_st_effort = (uint32_t*) &(this->st_effort);
      offset += 3;
      *val_st_effort = ((uint32_t)(*(inbuffer + offset++))>>5 & 0x07);
      *val_st_effort |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<3;
      *val_st_effort |= ((uint32_t)(*(inbuffer + offset++)) & 0xff)<<11;
      *val_st_effort |= ((uint32_t)(*(inbuffer + offset)) & 0x0f)<<19;
      uint32_t exp_st_effort = ((uint32_t)(*(inbuffer + offset++))&0xf0)>>4;
      exp_st_effort |= ((uint32_t)(*(inbuffer + offset)) & 0x7f)<<4;
      if(exp_st_effort !=0)
        *val_st_effort |= ((exp_st_effort)-1023+127)<<23;
      if( ((*(inbuffer+offset++)) & 0x80) > 0) this->st_effort = -this->st_effort;
      if (i < effort_length) {
          memcpy( &(this->effort[i]), &(this->st_effort), sizeof(float));
      }
      }
#endif
     return offset;
    }

    const char * getType(){ return "sensor_msgs/JointState"; };
    const char * getMD5(){ return "3066dcd76a6cfaef579bd0f34173e9fd"; };

  };

}
#endif