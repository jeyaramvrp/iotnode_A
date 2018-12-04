#include <iostream>
#include "iotSensor.h"

using namespace std;

Sensor::Sensor()
{
    //ctor
}

Sensor::~Sensor()
{
    //dtor
}

TempSensor::TempSensor()
{
    //ctor
    status = SENSOR_ENABLE;
}

TempSensor::~TempSensor()
{
    //ctor
}

void TempSensor::read()
{
    //Return garbage value since this application doesn't 
    //involve actual sensor at this moment. 
    return data;
}

void TempSensor::enabledisable(int argid, int enadis)
{
   if(argid == id && (enadis == SENSOR_ENABLE ||  enadis == SENSOR_DISABLE )) {
       status = enadis;
   }
}
        
void TempSensor::printproperties()
{
        cout<<"Minimum Temp:"<<min<<"/n";
        cout<<"Maximum Temp:"<<max<<"/n";
        cout<<"Temp sensor accuracy:"<<accuracy<<"/n";
}
