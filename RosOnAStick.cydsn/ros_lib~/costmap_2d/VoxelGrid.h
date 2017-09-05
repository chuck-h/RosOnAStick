#ifndef _ROS_costmap_2d_VoxelGrid_h
#define _ROS_costmap_2d_VoxelGrid_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"
#include "std_msgs/Header.h"
#include "geometry_msgs/Point32.h"
#include "geometry_msgs/Vector3.h"

namespace costmap_2d
{

  class VoxelGrid : public ros::Msg
  {
    public:
      std_msgs::Header header;
      uint8_t data_length;
      uint32_t st_data;
      uint32_t * data;
      geometry_msgs::Point32 origin;
      geometry_msgs::Vector3 resolutions;
      uint32_t size_x;
      uint32_t size_y;
      uint32_t size_z;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_SERIALIZE
      offset += this->header.serialize(outbuffer + offset);
      *(outbuffer + offset++) = data_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < data_length; i++){
      *(outbuffer + offset + 0) = (this->data[i] >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->data[i] >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->data[i] >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->data[i] >> (8 * 3)) & 0xFF;
      offset += sizeof(this->data[i]);
      }
      offset += this->origin.serialize(outbuffer + offset);
      offset += this->resolutions.serialize(outbuffer + offset);
      *(outbuffer + offset + 0) = (this->size_x >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->size_x >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->size_x >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->size_x >> (8 * 3)) & 0xFF;
      offset += sizeof(this->size_x);
      *(outbuffer + offset + 0) = (this->size_y >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->size_y >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->size_y >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->size_y >> (8 * 3)) & 0xFF;
      offset += sizeof(this->size_y);
      *(outbuffer + offset + 0) = (this->size_z >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (this->size_z >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (this->size_z >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (this->size_z >> (8 * 3)) & 0xFF;
      offset += sizeof(this->size_z);
#endif
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_DESERIALIZE
      offset += this->header.deserialize(inbuffer + offset);
      uint8_t data_lengthT = *(inbuffer + offset++);
      if(data_lengthT < data_length)
        data_length = data_lengthT;
      offset += 3;
      for( uint8_t i = 0; i < data_lengthT; i++){
      this->st_data =  ((uint32_t) (*(inbuffer + offset)));
      this->st_data |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->st_data |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->st_data |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->st_data);
      if (i < data_length) {
          memcpy( &(this->data[i]), &(this->st_data), sizeof(uint32_t));
      }
      }
      offset += this->origin.deserialize(inbuffer + offset);
      offset += this->resolutions.deserialize(inbuffer + offset);
      this->size_x =  ((uint32_t) (*(inbuffer + offset)));
      this->size_x |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->size_x |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->size_x |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->size_x);
      this->size_y =  ((uint32_t) (*(inbuffer + offset)));
      this->size_y |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->size_y |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->size_y |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->size_y);
      this->size_z =  ((uint32_t) (*(inbuffer + offset)));
      this->size_z |= ((uint32_t) (*(inbuffer + offset + 1))) << (8 * 1);
      this->size_z |= ((uint32_t) (*(inbuffer + offset + 2))) << (8 * 2);
      this->size_z |= ((uint32_t) (*(inbuffer + offset + 3))) << (8 * 3);
      offset += sizeof(this->size_z);
#endif
     return offset;
    }

    const char * getType(){ return "costmap_2d/VoxelGrid"; };
    const char * getMD5(){ return "48a040827e1322073d78ece5a497029c"; };

  };

}
#endif