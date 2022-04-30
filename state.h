#include <iostream>
#include <queue>

class state {

    public:

        state(int puzzle[9], int blankIndex, int algChoice);
        ~state();
        state* moveBlankUp();
        state* moveBlankDown();
        state* moveBlankLeft();
        state* moveBlankRight();
        int misplacedTileHeuristic(int puzzle[9]);
        int euclideanDistanceHeuristic(int puzzle[9]);
        void printPuzzle();


        int puzzle[9];
        int blankIndex;
        int algChoice;
        int heuristic;

};