#ifndef _ROS_gazebo_msgs_WorldState_h
#define _ROS_gazebo_msgs_WorldState_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "geometry_msgs/Pose.h"
#include "geometry_msgs/Twist.h"
#include "geometry_msgs/Wrench.h"

namespace gazebo_msgs
{

  class WorldState : public ros::Msg
  {
    public:
      std_msgs::Header header;
      uint8_t name_length;
      char* st_name;
      char* * name;
      uint8_t pose_length;
      geometry_msgs::Pose st_pose;
      geometry_msgs::Pose * pose;
      uint8_t twist_length;
      geometry_msgs::Twist st_twist;
      geometry_msgs::Twist * twist;
      uint8_t wrench_length;
      geometry_msgs::Wrench st_wrench;
      geometry_msgs::Wrench * wrench;

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
      *(outbuffer + offset++) = pose_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < pose_length; i++){
      offset += this->pose[i].serialize(outbuffer + offset);
      }
      *(outbuffer + offset++) = twist_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < twist_length; i++){
      offset += this->twist[i].serialize(outbuffer + offset);
      }
      *(outbuffer + offset++) = wrench_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < wrench_length; i++){
      offset += this->wrench[i].serialize(outbuffer + offset);
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
      uint8_t pose_lengthT = *(inbuffer + offset++);
      if(pose_lengthT < pose_length)
        pose_length = pose_lengthT;
      offset += 3;
      for( uint8_t i = 0; i < pose_lengthT; i++){
      offset += this->st_pose.deserialize(inbuffer + offset);
      if (i < pose_length) {
          memcpy( &(this->pose[i]), &(this->st_pose), sizeof(geometry_msgs::Pose));
      }
      }
      uint8_t twist_lengthT = *(inbuffer + offset++);
      if(twist_lengthT < twist_length)
        twist_length = twist_lengthT;
      offset += 3;
      for( uint8_t i = 0; i < twist_lengthT; i++){
      offset += this->st_twist.deserialize(inbuffer + offset);
      if (i < twist_length) {
          memcpy( &(this->twist[i]), &(this->st_twist), sizeof(geometry_msgs::Twist));
      }
      }
      uint8_t wrench_lengthT = *(inbuffer + offset++);
      if(wrench_lengthT < wrench_length)
        wrench_length = wrench_lengthT;
      offset += 3;
      for( uint8_t i = 0; i < wrench_lengthT; i++){
      offset += this->st_wrench.deserialize(inbuffer + offset);
      if (i < wrench_length) {
          memcpy( &(this->wrench[i]), &(this->st_wrench), sizeof(geometry_msgs::Wrench));
      }
      }
#endif
     return offset;
    }

    const char * getType(){ return "gazebo_msgs/WorldState"; };
    const char * getMD5(){ return "de1a9de3ab7ba97ac0e9ec01a4eb481e"; };

  };

}
#endif