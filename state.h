#ifndef STATE_H
#define STATE_H
#include <queue>

class state {

    public:

        state(int puzzle[9], int blankIndex, int algChoice, int depth, int heuristic, int estimatedCost);
        ~state();
        state* moveBlankUp(int algorithm);
        state* moveBlankDown(int algorithm);
        state* moveBlankLeft(int algorithm);
        state* moveBlankRight(int algorithm);
        void printPuzzle();


        int puzzle[9];
        int blankIndex;
        int algChoice;
        int heuristic;
        int depth;
        int estimatedCost;

};

#endif