#include "state.h"
#include <queue>
#include <iostream>

using namespace std;

state::state(int puzzle[9], int blankIndex, int algChoice)
{

    for (int i = 0; i < 9; i++)
    {
        this->puzzle[i] = puzzle[i];
    }

    this->blankIndex = blankIndex;
    this->algChoice = algChoice;
}

state::~state() {}


int misplacedTileHeuristic(int puzzle[9]) {

}

int euclideanDistanceHeuristic(int puzzle[9]) {

}


state *state::moveBlankUp()
{

    state *nextState;
    int newPuzzle[9];

    return nextState;
}

state *state::moveBlankDown()
{

    state *nextState;
    int newPuzzle[9];

    return nextState;
}

state *state::moveBlankLeft()
{

    state *nextState;
    int newPuzzle[9];

    return nextState;
}

state *state::moveBlankRight()
{

    state *nextState;
    int newPuzzle[9];

    return nextState;
}

void state::printPuzzle()
{

    cout << "------------------" << endl;
    cout << "|                |" << endl;
    cout << "| " << puzzle[0] << "     " << puzzle[1] << "     " << puzzle[2] << "  |" << endl;
    cout << "|                |" << endl;
    cout << "| " << puzzle[3] << "     " << puzzle[4] << "     " << puzzle[5] << "  |" << endl;
    cout << "|                |" << endl;
    cout << "| " << puzzle[6] << "     " << puzzle[7] << "     " << puzzle[8] << "  |" << endl;
    cout << "|                |" << endl;
    cout << "------------------" << endl;
}