#ifndef Sensor_H
#define Sensor_H
#include <Arduinoi.h>
#include "Device.h"
class sensor:public Device{/home/zshe/Bureau/BE_C1/Device_H/Device_h.ino
  protected:
  public:
    sensor(int p,string type){
      Device(p,type);
    }
    virtual int readdata()=0;
  /home/zshe/Bureau/BE_C1/Actuator_H/Actuator_H.ino
};
#endif