#ifndef COUNTER_H
#define COUNTER_H
#include <iostream>

class StepCounter{
    private:
        int steps;
    public:
        int getCount();
        void IncrementCount();
};

#endif