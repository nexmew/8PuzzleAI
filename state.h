#include <iostream>
#include <queue>

class state {

    public:

        state();
        ~state();
        state* moveBlankUp();
        state* moveBlankDown();
        state* moveBlankLeft();
        state* moveBlankRight();



    private:

        int puzzle[9];
        int blackIndex;

};