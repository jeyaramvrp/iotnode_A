#ifndef IOTSENSOR_H
#define IOTSENSOR_H

#define SENSOR_ENABLE 1
#define SENSOR_DISABLE 0

class Sensor
{
    public:
        Sensor();
        virtual ~Sensor();
        virtual int read() = 0;
        virtual void enabledisable(int id, int enadis) = 0;
        virtual void printproperties()=0;

    protected:

    private:
        int data;
        int id;
        int serialnum;
        int status;
};

class TempSensor:public Sensor
{
    public:
        TempSensor();
       ~TempSensor();
    private:
        int min;
        int max;
        int accuracy;  
};

class HumiditySensor:public Sensor
{
    public:
        HumiditySensor();
        ~HumiditySensor();
    private:
        int responsetime;
        int rhmin;
        int rhmax;
        int accuracy;  

};
#endif // IOTSENSOR_H
