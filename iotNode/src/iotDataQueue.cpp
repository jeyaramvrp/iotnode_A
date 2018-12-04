#include <iostream>
#include "../include/iotDataQueue.h"

using namespace std;

DataQueue::DataQueue()
{
    //ctor
}

DataQueue::~DataQueue()
{
    //dtor
}

void DataQueue::init()
{
    rloc = sloc = 0;
}

//initialise the queue
void DataQueue::qput(int i)
{
    if(sloc==IOT_DATAQUEUE_SIZE){
        cout << "queue is full. \n";
        return;
    }
    sloc++;
    q[sloc] = i;
}

//get an integer from the queue
int DataQueue::qget()
{
    if(rloc == sloc){
        cout << "queue underflow. \n";
        return 0;
    }
    rloc++;
    return q[rloc];
}

