#ifndef IOTDATAQUEUE_H
#define IOTDATAQUEUE_H

#define IOT_DATAQUEUE_SIZE 10

class DataQueue
{
    public:
        DataQueue();
        virtual ~DataQueue();
        void init();
        void qput(int i);
        int qget();

    protected:

    private:
        int q[IOT_DATAQUEUE_SIZE];
        int sloc, rloc;
};

#endif // IOTDATAQUEUE_H
