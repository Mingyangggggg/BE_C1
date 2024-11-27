#ifndef Sensor_H
#define Sensor_H
#include <Arduinoi.h>
#include "Device.h"
class sensor:public Device{/home/zshe/Bureau/BE_C1/Device_H/Device_h.ino
  public:
    sensor(int p,string type){
      Device(p,type);
    }
    virtual int readdata()=0;
  
};
#endif