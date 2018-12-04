#ifndef IOTSENSOR_H
#define IOTSENSOR_H

#define SENSOR_ENABLE 1
#define SENSOR_DISABLE 0

class Sensor
{
    public:
        Sensor() {};
        virtual ~Sensor(){};
        virtual int read() = 0;
        virtual void enabledisable(int id, int enadis) = 0;
        virtual void printproperties()=0;

        int data;
        int id;
        int serialnum;
        int status;
};

#endif // IOTSENSOR_H
