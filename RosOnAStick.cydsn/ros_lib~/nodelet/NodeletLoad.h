#ifndef _ROS_SERVICE_NodeletLoad_h
#define _ROS_SERVICE_NodeletLoad_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace nodelet
{

static const char NODELETLOAD[] = "nodelet/NodeletLoad";

  class NodeletLoadRequest : public ros::Msg
  {
    public:
      char * name;
      char * type;
      uint8_t remap_source_args_length;
      char* st_remap_source_args;
      char* * remap_source_args;
      uint8_t remap_target_args_length;
      char* st_remap_target_args;
      char* * remap_target_args;
      uint8_t my_argv_length;
      char* st_my_argv;
      char* * my_argv;
      char * bond_id;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_SERIALIZE
      uint32_t length_name = strlen( (const char*) this->name);
      memcpy(outbuffer + offset, &length_name, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->name, length_name);
      offset += length_name;
      uint32_t length_type = strlen( (const char*) this->type);
      memcpy(outbuffer + offset, &length_type, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->type, length_type);
      offset += length_type;
      *(outbuffer + offset++) = remap_source_args_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < remap_source_args_length; i++){
      uint32_t length_remap_source_argsi = strlen( (const char*) this->remap_source_args[i]);
      memcpy(outbuffer + offset, &length_remap_source_argsi, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->remap_source_args[i], length_remap_source_argsi);
      offset += length_remap_source_argsi;
      }
      *(outbuffer + offset++) = remap_target_args_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < remap_target_args_length; i++){
      uint32_t length_remap_target_argsi = strlen( (const char*) this->remap_target_args[i]);
      memcpy(outbuffer + offset, &length_remap_target_argsi, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->remap_target_args[i], length_remap_target_argsi);
      offset += length_remap_target_argsi;
      }
      *(outbuffer + offset++) = my_argv_length;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      *(outbuffer + offset++) = 0;
      for( uint8_t i = 0; i < my_argv_length; i++){
      uint32_t length_my_argvi = strlen( (const char*) this->my_argv[i]);
      memcpy(outbuffer + offset, &length_my_argvi, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->my_argv[i], length_my_argvi);
      offset += length_my_argvi;
      }
      uint32_t length_bond_id = strlen( (const char*) this->bond_id);
      memcpy(outbuffer + offset, &length_bond_id, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->bond_id, length_bond_id);
      offset += length_bond_id;
#endif
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_DESERIALIZE
      uint32_t length_name;
      memcpy(&length_name, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_name; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_name-1]=0;
      this->name = (char *)(inbuffer + offset-1);
      offset += length_name;
      uint32_t length_type;
      memcpy(&length_type, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_type; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_type-1]=0;
      this->type = (char *)(inbuffer + offset-1);
      offset += length_type;
      uint8_t remap_source_args_lengthT = *(inbuffer + offset++);
      if(remap_source_args_lengthT < remap_source_args_length)
        remap_source_args_length = remap_source_args_lengthT;
      offset += 3;
      for( uint8_t i = 0; i < remap_source_args_lengthT; i++){
      uint32_t length_st_remap_source_args;
      memcpy(&length_st_remap_source_args, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_remap_source_args; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_remap_source_args-1]=0;
      this->st_remap_source_args = (char *)(inbuffer + offset-1);
      offset += length_st_remap_source_args;
      if (i < remap_source_args_length) {
          memcpy( &(this->remap_source_args[i]), &(this->st_remap_source_args), sizeof(char*));
      }
      }
      uint8_t remap_target_args_lengthT = *(inbuffer + offset++);
      if(remap_target_args_lengthT < remap_target_args_length)
        remap_target_args_length = remap_target_args_lengthT;
      offset += 3;
      for( uint8_t i = 0; i < remap_target_args_lengthT; i++){
      uint32_t length_st_remap_target_args;
      memcpy(&length_st_remap_target_args, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_remap_target_args; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_remap_target_args-1]=0;
      this->st_remap_target_args = (char *)(inbuffer + offset-1);
      offset += length_st_remap_target_args;
      if (i < remap_target_args_length) {
          memcpy( &(this->remap_target_args[i]), &(this->st_remap_target_args), sizeof(char*));
      }
      }
      uint8_t my_argv_lengthT = *(inbuffer + offset++);
      if(my_argv_lengthT < my_argv_length)
        my_argv_length = my_argv_lengthT;
      offset += 3;
      for( uint8_t i = 0; i < my_argv_lengthT; i++){
      uint32_t length_st_my_argv;
      memcpy(&length_st_my_argv, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_st_my_argv; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_st_my_argv-1]=0;
      this->st_my_argv = (char *)(inbuffer + offset-1);
      offset += length_st_my_argv;
      if (i < my_argv_length) {
          memcpy( &(this->my_argv[i]), &(this->st_my_argv), sizeof(char*));
      }
      }
      uint32_t length_bond_id;
      memcpy(&length_bond_id, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_bond_id; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_bond_id-1]=0;
      this->bond_id = (char *)(inbuffer + offset-1);
      offset += length_bond_id;
#endif
     return offset;
    }

    const char * getType(){ return NODELETLOAD; };
    const char * getMD5(){ return "c6e28cc4d2e259249d96cfb50658fbec"; };

  };

  class NodeletLoadResponse : public ros::Msg
  {
    public:
      bool success;

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_SERIALIZE
      union {
        bool real;
        uint8_t base;
      } u_success;
      u_success.real = this->success;
      *(outbuffer + offset + 0) = (u_success.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->success);
#endif
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
#ifndef ROS_MSG_DONT_DESERIALIZE
      union {
        bool real;
        uint8_t base;
      } u_success;
      u_success.base = 0;
      u_success.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->success = u_success.real;
      offset += sizeof(this->success);
#endif
     return offset;
    }

    const char * getType(){ return NODELETLOAD; };
    const char * getMD5(){ return "358e233cde0c8a8bcfea4ce193f8fc15"; };

  };

  class NodeletLoad {
    public:
    typedef NodeletLoadRequest Request;
    typedef NodeletLoadResponse Response;
  };

}
#endif
