#include <iostream>
#include <vector>
#include "puzzle.h"
#include "state.h"
#include "state.cpp"

using namespace std;

int main()
{

    // Initializes the array we read from the user to solve!
    int userPuzzle[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    // Initializes the variable that holds the blank (0) index!
    int blankIndex = 0;
    // Initializes a variable choice that determines which algorithm solves the puzzle!
    int algorithm = 0;

    int heuristic = 0;

    printStartingMenu();

    cout << "Enter 8 puzzle: " << endl;

    for (int i = 0; i < 9; i++)
    {
        cin >> userPuzzle[i];
    }
    for (int j = 0; j < 9; j++)
    {
        if (userPuzzle[j] == 0)
        {
            blankIndex = j;
        }
    }

    cout << "Which algorithm would you like to solve the puzzle with?" << endl;
    cout << "Enter 1 for Uniform Cost Search" << endl;
    cout << "Enter 2 for A* Search with the Misplaced Tile Heuristic" << endl;
    cout << "Enter 3 for A* search with the Euclidean Distance Heuristic" << endl;

    cin >> algorithm;

    // Checks choice and makes sure it is either 1, 2 or 3!
    // checkChoice(algorithm);

    // Creates the state object called puzzle that will solve the problem!
    state *puzzle = new state(userPuzzle, blankIndex, algorithm, 0, heuristic, 0);

    // If choice is 1 we will use Uniform Cost Search!
    if (algorithm == 1)
    {
        uniformCostSearch(puzzle, algorithm);
    }

    // If choice is 2 we will use A* Search with the Misplaced Tile Heuristic!
    else if (algorithm == 2)
    {
        heuristic = misplacedTileHeuristic(puzzle->puzzle);
        puzzle->heuristic = heuristic;
        uniformCostSearch(puzzle, algorithm);
    }

    // If choice is 3 we will use A* Search with the Euclidean Distance Heuristic!
    else if (algorithm == 3)
    {
        // puzzle->heuristic = euclideanDistanceHeuristic(puzzle->puzzle);
    }

    return 0;
}