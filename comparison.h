#ifndef COMPARISON_H
#define COMPARISON_H
#include "state.h"

class comparison {
    
    public:

        int operator() (state* test1, state* test2) {
            return test1->estimatedCost > test2->estimatedCost;
        }
};


#endif