#ifndef _ROS_control_msgs_FollowJointTrajectoryActionGoal_h
#define _ROS_control_msgs_FollowJointTrajectoryActionGoal_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "actionlib_msgs/GoalID.h"
#include "control_msgs/FollowJointTrajectoryGoal.h"

namespace control_msgs
{

  class FollowJointTrajectoryActionGoal : public ros::Msg
  {
    public:
      std_msgs::Header header;
      actionlib_msgs::GoalID goal_id;
      control_msgs::FollowJointTrajectoryGoal goal;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_SERIALIZE
      offset += this->header.serialize(outbuffer + offset);
      offset += this->goal_id.serialize(outbuffer + offset);
      offset += this->goal.serialize(outbuffer + offset);
#endif
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_DESERIALIZE
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->goal_id.deserialize(inbuffer + offset);
      offset += this->goal.deserialize(inbuffer + offset);
#endif
     return offset;
    }

    const char * getType(){ return "control_msgs/FollowJointTrajectoryActionGoal"; };
    const char * getMD5(){ return "cff5c1d533bf2f82dd0138d57f4304bb"; };

  };

}
#endif