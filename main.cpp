#include <iostream>
#include <vector>
#include "puzzle.h"
#include "state.h"

using namespace std;

int main()
{

    // Initializes the array we read from the user to solve!
    int puzzle[9];
    // Initializes the variable that holds the blank (0) index!
    int blankIndex;

    printStartingMenu();
    
    cout << "Enter 8 puzzle: " << endl;

    for (int i = 0; i < 9; i++)
    {
        cin >> puzzle[i];

        if (puzzle[i] == 0) {
            blankIndex = i;
        }
    }

    


    // Creates the state object called puzzle that will solve the problem!
    state* puzzle = new state();


    printPuzzle(puzzle);

    return 0;
}