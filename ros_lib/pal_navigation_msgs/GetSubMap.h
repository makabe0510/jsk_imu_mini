#ifndef _ROS_SERVICE_GetSubMap_h
#define _ROS_SERVICE_GetSubMap_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace pal_navigation_msgs
{

static const char GETSUBMAP[] = "pal_navigation_msgs/GetSubMap";

  class GetSubMapRequest : public ros::Msg
  {
    public:
      int8_t index;

    GetSubMapRequest():
      index(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      union {
        int8_t real;
        uint8_t base;
      } u_index;
      u_index.real = this->index;
      *(outbuffer + offset + 0) = (u_index.base >> (8 * 0)) & 0xFF;
      offset += sizeof(this->index);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      union {
        int8_t real;
        uint8_t base;
      } u_index;
      u_index.base = 0;
      u_index.base |= ((uint8_t) (*(inbuffer + offset + 0))) << (8 * 0);
      this->index = u_index.real;
      offset += sizeof(this->index);
     return offset;
    }

    const char * getType(){ return GETSUBMAP; };
    const char * getMD5(){ return "c4ecff52046eaecf0190e650b1958286"; };

  };

  class GetSubMapResponse : public ros::Msg
  {
    public:

    GetSubMapResponse()
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
     return offset;
    }

    const char * getType(){ return GETSUBMAP; };
    const char * getMD5(){ return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class GetSubMap {
    public:
    typedef GetSubMapRequest Request;
    typedef GetSubMapResponse Response;
  };

}
#endif
