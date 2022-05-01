#ifndef COMPARE_H
#define COMPARE_H


class compare {


    public:
    int operator() (state* test1, state* test2) {
        return test1->blankIndex;
    }
}


#endif