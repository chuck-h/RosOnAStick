#ifndef _ROS_trajectory_msgs_MultiDOFJointTrajectory_h
#define _ROS_trajectory_msgs_MultiDOFJointTrajectory_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "trajectory_msgs/MultiDOFJointTrajectoryPoint.h"

namespace trajectory_msgs
{

  class MultiDOFJointTrajectory : public ros::Msg
  {
    public:
      std_msgs::Header header;
      uint8_t joint_names_length;
      char* st_joint_names;
      char* * joint_names;
      uint8_t points_length;
      trajectory_msgs::MultiDOFJointTrajectoryPoint st_points;
      trajectory_msgs::MultiDOFJointTrajectoryPoint * points;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_SERIALIZE
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset++) = joint_names_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < joint_names_length; i++){
      uint32_t length_joint_namesi = strlen( (const char*) this->joint_names[i]);
      memcpy(outbuffer + offset, &length_joint_namesi, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->joint_names[i], length_joint_namesi);
      offset += length_joint_namesi;
      }
      *(outbuffer + offset++) = points_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < points_length; i++){
      offset += this->points[i].serialize(outbuffer + offset);
      }
#endif
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_DESERIALIZE
      offset += this->header.deserialize(inbuffer + offset);
      uint8_t joint_names_lengthT = *(inbuffer + offset++);
      if(joint_names_lengthT < joint_names_length)
        joint_names_length = joint_names_lengthT;
      offset += 3;
      for( uint8_t i = 0; i < joint_names_lengthT; i++){
      uint32_t length_st_joint_names;
      memcpy(&length_st_joint_names, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_joint_names; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_joint_names-1]=0;
      this->st_joint_names = (char *)(inbuffer + offset-1);
      offset += length_st_joint_names;
      if (i < joint_names_length) {
          memcpy( &(this->joint_names[i]), &(this->st_joint_names), sizeof(char*));
      }
      }
      uint8_t points_lengthT = *(inbuffer + offset++);
      if(points_lengthT < points_length)
        points_length = points_lengthT;
      offset += 3;
      for( uint8_t i = 0; i < points_lengthT; i++){
      offset += this->st_points.deserialize(inbuffer + offset);
      if (i < points_length) {
          memcpy( &(this->points[i]), &(this->st_points), sizeof(trajectory_msgs::MultiDOFJointTrajectoryPoint));
      }
      }
#endif
     return offset;
    }

    const char * getType(){ return "trajectory_msgs/MultiDOFJointTrajectory"; };
    const char * getMD5(){ return "ef145a45a5f47b77b7f5cdde4b16c942"; };

  };

}
#endif