#ifndef _ROS_actionlib_tutorials_AveragingActionGoal_h
#define _ROS_actionlib_tutorials_AveragingActionGoal_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "actionlib_msgs/GoalID.h"
#include "actionlib_tutorials/AveragingGoal.h"

namespace actionlib_tutorials
{

  class AveragingActionGoal : public ros::Msg
  {
    public:
      std_msgs::Header header;
      actionlib_msgs::GoalID goal_id;
      actionlib_tutorials::AveragingGoal goal;

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

    const char * getType(){ return "actionlib_tutorials/AveragingActionGoal"; };
    const char * getMD5(){ return "1561825b734ebd6039851c501e3fb570"; };

  };

}
#endif