#ifndef _ROS_control_msgs_PointHeadAction_h
#define _ROS_control_msgs_PointHeadAction_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "control_msgs/PointHeadActionGoal.h"
#include "control_msgs/PointHeadActionResult.h"
#include "control_msgs/PointHeadActionFeedback.h"

namespace control_msgs
{

  class PointHeadAction : public ros::Msg
  {
    public:
      control_msgs::PointHeadActionGoal action_goal;
      control_msgs::PointHeadActionResult action_result;
      control_msgs::PointHeadActionFeedback action_feedback;

    PointHeadAction():
      action_goal(),
      action_result(),
      action_feedback()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_SERIALIZE
      offset += this->action_goal.serialize(outbuffer + offset);
      offset += this->action_result.serialize(outbuffer + offset);
      offset += this->action_feedback.serialize(outbuffer + offset);
#endif
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_DESERIALIZE
      offset += this->action_goal.deserialize(inbuffer + offset);
      offset += this->action_result.deserialize(inbuffer + offset);
      offset += this->action_feedback.deserialize(inbuffer + offset);
#endif
     return offset;
    }

    const char * getType(){ return "control_msgs/PointHeadAction"; };
    const char * getMD5(){ return "7252920f1243de1b741f14f214125371"; };

  };

}
#endif