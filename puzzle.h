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
    cout << "|         0 1 2 4 5 3 7 8 with spaces!          |" << endl;
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

int euclideanDistanceHeuristic(int puzzle[9])
{
    int updatedHeuristic = 0;
    int counter = 0;

    int goal[9] = {1, 2, 3, 4, 5, 6, 7, 8, 0};
    int oneDistance[9] = {0, 1, 2, 1, 2, 3, 2, 3, 4};
    int twoDistance[9] = {1, 0, 1, 2, 1, 2, 3, 2, 3};
    int threeDistance[9] = {2, 1, 0, 3, 2, 1, 4, 3, 2};
    int fourDistance[9] = {1, 2, 3, 0, 1, 2, 1, 2, 3};
    int fiveDistance[9] = {2, 1, 2, 1, 0, 1, 2, 1, 2};
    int sixDistance[9] = {3, 2, 1, 2, 1, 0, 3, 2, 1};
    int sevenDistance[9] = {2, 3, 4, 1, 2, 3, 0, 1, 2};
    int eightDistance[9] = {3, 2, 3, 2, 1, 2, 1, 0, 1};
    int zeroDistance[9] = {4, 3, 2, 3, 2, 1, 2, 1, 0};

    for (int i = 0; i < 9; i++) {

        if (puzzle[i] == 0) {
            counter += zeroDistance[i];
        }
        else if (puzzle[i] == 1) {
            counter += oneDistance[i];
        }
        else if (puzzle[i] == 2) {
            counter += twoDistance[i];
        }
        else if (puzzle[i] == 3) {
            counter += threeDistance[i];
        }
        else if (puzzle[i] == 4) {
            counter += fourDistance[i];
        }
        else if (puzzle[i] == 5) {
            counter += fiveDistance[i];
        }
        else if (puzzle[i] == 6) {
            counter += sixDistance[i];
        }
        else if (puzzle[i] == 7) {
            counter += sevenDistance[i];
        }
        else if (puzzle[i] == 8) {
            counter += eightDistance[i];
        }
    }

    updatedHeuristic = counter;

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