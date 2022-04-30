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
        void uniformCostSearch(state* puzzle);
        int misplacedTileHeuristic(int puzzle[9]);
        int euclideanDistanceHeuristic(int puzzle[9]);


        int puzzle[9];
        int blankIndex;
        int algChoice;
        int heuristic;

};