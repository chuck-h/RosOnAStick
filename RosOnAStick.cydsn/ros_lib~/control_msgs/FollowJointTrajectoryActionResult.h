#ifndef _ROS_control_msgs_FollowJointTrajectoryActionResult_h
#define _ROS_control_msgs_FollowJointTrajectoryActionResult_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "actionlib_msgs/GoalStatus.h"
#include "control_msgs/FollowJointTrajectoryResult.h"

namespace control_msgs
{

  class FollowJointTrajectoryActionResult : public ros::Msg
  {
    public:
      std_msgs::Header header;
      actionlib_msgs::GoalStatus status;
      control_msgs::FollowJointTrajectoryResult result;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_SERIALIZE
      offset += this->header.serialize(outbuffer + offset);
      offset += this->status.serialize(outbuffer + offset);
      offset += this->result.serialize(outbuffer + offset);
#endif
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_DESERIALIZE
      offset += this->header.deserialize(inbuffer + offset);
      offset += this->status.deserialize(inbuffer + offset);
      offset += this->result.deserialize(inbuffer + offset);
#endif
     return offset;
    }

    const char * getType(){ return "control_msgs/FollowJointTrajectoryActionResult"; };
    const char * getMD5(){ return "bce83d50f7bb28226801436caf0e2043"; };

  };

}
#endif