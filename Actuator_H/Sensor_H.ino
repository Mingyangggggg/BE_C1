#ifndef Sensor_H
#define Sensor_H
#include <Arduinoi.h>
#include "Device.h"
class sensor:public Device{
  protected:
  public:
    sensor(int p,string type){
      Device(p,type);
    }
    virtual int readdata()=0;
  
};
#endif