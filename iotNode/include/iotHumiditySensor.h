#ifndef IOTHUMIDITYSENSOR_H
#define IOTHUMIDITYSENSOR_H

#include "iotSensor.h"

class HumiditySensor:public Sensor
{
    public:
        HumiditySensor();
        ~HumiditySensor();
        int read();
        void enabledisable(int id, int enadis);
        void printproperties();


    private:
        int responsetime;
        int rhmin;
        int rhmax;
        int accuracy;  

};
#endif // IOTHUMIDITYSENSOR_H
