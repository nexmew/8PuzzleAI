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

    return 1;
}

int euclideanDistanceHeuristic(int puzzle[9]) {

    return 1;
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


// Uniform cost search uses a priority queue to explore the states by the least cost
void uniformCostSearch(state* puzzle) {

    int goal[9] = {1, 2, 3, 4, 5, 6, 7, 8, 0};
    priority_queue<state*> queue;
    state* exploringNode;
    bool solved = false;
    int state = 1;

    queue.push(puzzle);

    while (queue.size() != 0)
    {
        // Exploring the least costly node and removing it from the priority queue!
        exploringNode = queue.top();
        queue.pop();

        // Checking for goal state! 
        for (int i = 0; i < 9; i++) {
            if (exploringNode->puzzle[i] == goal[i]) {
                solved = true;
            }
        }

        // We solved the puzzle!
        if (solved == true) {

            cout << "Puzzle solved!" << endl;

        }

        cout << "State: " << state << endl;
        state++;
        exploringNode->printPuzzle();

    }

} 