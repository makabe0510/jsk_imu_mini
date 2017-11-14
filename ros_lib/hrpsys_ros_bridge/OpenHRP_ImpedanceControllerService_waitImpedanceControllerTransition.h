#ifndef _ROS_SERVICE_OpenHRP_ImpedanceControllerService_waitImpedanceControllerTransition_h
#define _ROS_SERVICE_OpenHRP_ImpedanceControllerService_waitImpedanceControllerTransition_h
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace hrpsys_ros_bridge
{

static const char OPENHRP_IMPEDANCECONTROLLERSERVICE_WAITIMPEDANCECONTROLLERTRANSITION[] = "hrpsys_ros_bridge/OpenHRP_ImpedanceControllerService_waitImpedanceControllerTransition";

  class OpenHRP_ImpedanceControllerService_waitImpedanceControllerTransitionRequest : public ros::Msg
  {
    public:
      const char* name;

    OpenHRP_ImpedanceControllerService_waitImpedanceControllerTransitionRequest():
      name("")
    {
    }

    virtual int serialize(unsigned char *outbuffer) const
    {
      int offset = 0;
      uint32_t length_name = strlen(this->name);
      memcpy(outbuffer + offset, &length_name, sizeof(uint32_t));
      offset += 4;
      memcpy(outbuffer + offset, this->name, length_name);
      offset += length_name;
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer)
    {
      int offset = 0;
      uint32_t length_name;
      memcpy(&length_name, (inbuffer + offset), sizeof(uint32_t));
      offset += 4;
      for(unsigned int k= offset; k< offset+length_name; ++k){
          inbuffer[k-1]=inbuffer[k];
      }
      inbuffer[offset+length_name-1]=0;
      this->name = (char *)(inbuffer + offset-1);
      offset += length_name;
     return offset;
    }

    const char * getType(){ return OPENHRP_IMPEDANCECONTROLLERSERVICE_WAITIMPEDANCECONTROLLERTRANSITION; };
    const char * getMD5(){ return "c1f3d28f1b044c871e6eff2e9fc3c667"; };

  };

  class OpenHRP_ImpedanceControllerService_waitImpedanceControllerTransitionResponse : public ros::Msg
  {
    public:

    OpenHRP_ImpedanceControllerService_waitImpedanceControllerTransitionResponse()
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

    const char * getType(){ return OPENHRP_IMPEDANCECONTROLLERSERVICE_WAITIMPEDANCECONTROLLERTRANSITION; };
    const char * getMD5(){ return "d41d8cd98f00b204e9800998ecf8427e"; };

  };

  class OpenHRP_ImpedanceControllerService_waitImpedanceControllerTransition {
    public:
    typedef OpenHRP_ImpedanceControllerService_waitImpedanceControllerTransitionRequest Request;
    typedef OpenHRP_ImpedanceControllerService_waitImpedanceControllerTransitionResponse Response;
  };

}
#endif