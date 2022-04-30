#ifndef STATE_H
#define STATE_H
#include <queue>

class state {

    public:

        state(int puzzle[9], int blankIndex, int algChoice);
        ~state();
        state* moveBlankUp(int algorithm);
        state* moveBlankDown(int algorithm);
        state* moveBlankLeft(int algorithm);
        state* moveBlankRight(int algorithm);
        void printPuzzle();
        void uniformCostSearch(state* puzzle[9]);


        int puzzle[9];
        int blankIndex;
        int algChoice;
        int heuristic;

};

#endif