#ifndef PUZZLE_H
#define PUZZLE_H
#include <iostream>
#include <vector>
using namespace std;

void printStartingMenu()
{
    cout << "-------------------------------------------------" << endl;
    cout << "|                                               |" << endl;
    cout << "|       Welcome to my 8 puzzle solver!          |" << endl;
    cout << "|                                               |" << endl;
    cout << "|    Please enter your puzzle as a string:      |" << endl;
    cout << "|                                               |" << endl;
    cout << "|                                               |" << endl;
    cout << "-------------------------------------------------" << endl;
}

int misplacedTileHeuristic(int puzzle[9])
{
    int updatedHeuristic = 0;

    // Counts how many misplaced tiles we have
    for (int i = 0; i < 9; i++) {
        if ((puzzle[i] != 0) && (puzzle[i] != (i + 1) % 9)) {
            updatedHeuristic++;
        }
    }
    cout << "Misplaced tiles: " << updatedHeuristic << endl;
    return updatedHeuristic;
}


/*
void checkChoice(int choice) {
    if (choice != 1 || choice != 2 || choice != 3)
    {
        cout << "Invalid choice entered!" << endl;
        cout << "Which algorithm would you like to solve the puzzle with?" << endl;
        cout << "Enter 1 for Uniform Cost Search" << endl;
        cout << "Enter 2 for A* Search with the Misplaced Tile Heuristic" << endl;
        cout << "Enter 3 for A* search with the Euclidean Distance Heuristic" << endl;
    }
}
*/



#endif