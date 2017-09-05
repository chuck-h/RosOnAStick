#ifndef _ROS_geometry_msgs_Polygon_h
#define _ROS_geometry_msgs_Polygon_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "geometry_msgs/Point32.h"

namespace geometry_msgs
{

  class Polygon : public ros::Msg
  {
    public:
      uint8_t points_length;
      geometry_msgs::Point32 st_points;
      geometry_msgs::Point32 * points;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_SERIALIZE
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
      uint8_t points_lengthT = *(inbuffer + offset++);
      if(points_lengthT < points_length)
        points_length = points_lengthT;
      offset += 3;
      for( uint8_t i = 0; i < points_lengthT; i++){
      offset += this->st_points.deserialize(inbuffer + offset);
      if (i < points_length) {
          memcpy( &(this->points[i]), &(this->st_points), sizeof(geometry_msgs::Point32));
      }
      }
#endif
     return offset;
    }

    const char * getType(){ return "geometry_msgs/Polygon"; };
    const char * getMD5(){ return "cd60a26494a087f577976f0329fa120e"; };

  };

}
#endif