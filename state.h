#ifndef STATE_H
#define STATE_H
#include <queue>

class state
{

public:

    state(int puzzle[9], int zeroIndex, int algorithm, int depth, int heuristic, int estimatedCost);
    ~state();

    state *moveZeroUp(int algorithm);
    state *moveZeroDown(int algorithm);
    state *moveZeroLeft(int algorithm);
    state *moveZeroRight(int algorithm);

    void printPuzzle();

    int puzzle[9];
    int zeroIndex;
    int algorithm;
    int heuristic; // h(n)
    int depth; // g(n)
    int estimatedCost; // f(n)
};

#endif