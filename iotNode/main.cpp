#include <iostream>
#include "iotDataQueue.h"
#include "iotHumiditySensor.h"
#include "iotTempSensor.h"

//this is an example
using namespace std;

int main()
{
    DataQueue temperature, humidity; //create two queue objects
    TempSensor t;
    HumiditySensor h;

    t.read();
    h.read();

    temperature.init();
    humidity.init();

    temperature.qput(10);
    humidity.qput(19);

    temperature.qput(20);
    humidity.qput(1);
    //this is a comment
    cout << "Contents of Temperature queue: ";

    cout << temperature.qget() << " ";
    cout << temperature.qget() << "\n";

    cout << "Contents of Humidity queue: ";
    cout << humidity.qget() << " ";
    cout << humidity.qget() << "\n";

    return 0;
}
