#include "state.h"
#include <queue>
#include <iostream>

using namespace std;

state::state() {
     
}

state::~state() {

}

state* uniformCostSearch(state* puzzle) {

    int goal[9] = {1, 2, 3, 4, 5, 6, 7, 8, 0};
    priority_queue<state*> queue;
    state* currentNode;

    queue.push(puzzle);

    while (queue.size() != 0) {

        currentNode = queue.top();
        queue.pop();


    }

}


state* state::moveBlankUp() {

    state* nextState;
    int newPuzzle[9];

}

state* state::moveBlankDown() {

    state* nextState;
    int newPuzzle[9];

}

state* state::moveBlankLeft() {

    state* nextState;
    int newPuzzle[9];

}

state* state::moveBlankRight() {

    state* nextState;
    int newPuzzle[9];

}