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

state *uniformCostSearch(state *puzzle)
{

    int goal[9] = {1, 2, 3, 4, 5, 6, 7, 8, 0};
    priority_queue<state *> queue;
    state *currentNode;

    queue.push(puzzle);

    while (queue.size() != 0)
    {

        currentNode = queue.top();
        queue.pop();
    }
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