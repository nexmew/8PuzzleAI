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
    // Initializes a variable choice that determines which algorithm solves the puzzle!
    int choice;

    printStartingMenu();

    cout << "Enter 8 puzzle: " << endl;

    for (int i = 0; i < 9; i++)
    {
        cin >> puzzle[i];

        if (puzzle[i] == 0)
        {
            blankIndex = i;
        }
    }

    cout << "Which algorithm would you like to solve the puzzle with?" << endl;
    cout << "Enter 1 for Uniform Cost Search" << endl;
    cout << "Enter 2 for A* Search with the Misplaced Tile Heuristic" << endl;
    cout << "Enter 3 for A* search with the Euclidean Distance Heuristic" << endl;

    cin >> choice;

    // Checks choice and makes sure it is either 1, 2 or 3!
    checkChoice(choice);

    // If choice is 1 we will use Uniform Cost Search!
    if (choice == 1) {

    }
    
    // If choice is 2 we will use A* Search with the Misplaced Tile Heuristic!
    else if (choice == 2) {

    }

    // If choice is 3 we will use A* Search with the Euclidean Distance Heuristic!
    else if (choice == 3) {

    }

    // If choice is not 1, 2 or 3 check choice for new input!
    else {
        checkChoice(choice);
    }

    

    // Creates the state object called puzzle that will solve the problem!
    state *puzzle = new state();

    printPuzzle(puzzle);

    return 0;
}