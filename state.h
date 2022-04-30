#include <iostream>
#include <queue>

class state {

    public:

        state(int puzzle[9], int blankIndex);
        ~state();
        state* moveBlankUp();
        state* moveBlankDown();
        state* moveBlankLeft();
        state* moveBlankRight();
        state* uniformCostSearch(state* puzzle);



    private:

        int puzzle[9];
        int blankIndex;

};