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


void printPuzzle(int input[9])
{

    cout << "------------------" << endl;
    cout << "|                |" << endl;
    cout << "| " << input[0] << "     " << input[1] << "     " << input[2] << "  |" << endl;
    cout << "|                |" << endl;
    cout << "| " << input[3] << "     " << input[4] << "     " << input[5] << "  |" << endl;
    cout << "|                |" << endl;
    cout << "| " << input[6] << "     " << input[7] << "     " << input[8] << "  |" << endl;
    cout << "|                |" << endl;
    cout << "------------------" << endl;
}

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
