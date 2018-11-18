#ifndef IOTDATAQUEUE_H
#define IOTDATAQUEUE_H


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
        int q[10];
        int sloc, rloc;
};

#endif // IOTDATAQUEUE_H
