#ifndef DEVICE_H
#define DEVICE_H
#include <Arduinoi.h>

class Device{
  protected:
    int pin;
    string Devicetype;
  public:
    Device(int p,string type){
      pin=p;
      Devicetype=type;
    }
    virtual void initialize()=0;
    virtual string getdevicetype(){
      return Devicetype;
    }
}


