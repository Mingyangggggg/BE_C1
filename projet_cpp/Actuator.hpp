#ifndef Actuator_H
#define Actuator_H
#include <Arduinoi.h>
#include "Device.h"

class Actuator:public Device{
  public:
  Actuator(int p,string type){
    Device(p,type);
  }
  virtual void action()=0;
}
#endif;/home/zshe/Bureau/BE_C1/projet_cpp/projet_cpp.ino