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

    while (choice != 1 || choice != 2 || choice != 3)
    {
        cout << "Invalid choice entered!" << endl;
        cout << "Which algorithm would you like to solve the puzzle with?" << endl;
        cout << "Enter 1 for Uniform Cost Search" << endl;
        cout << "Enter 2 for A* Search with the Misplaced Tile Heuristic" << endl;
        cout << "Enter 3 for A* search with the Euclidean Distance Heuristic" << endl;
    }

    // Creates the state object called puzzle that will solve the problem!
    state *puzzle = new state();

    printPuzzle(puzzle);

    return 0;
}