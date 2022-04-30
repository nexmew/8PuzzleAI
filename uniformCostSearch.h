#include <iostream>
#include <queue>
#include "state.h"


using namespace std;


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
        // Exploring the least costly node!
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

        }

        cout << "State: " << state << endl;
        state++;
        exploringNode->printPuzzle();

    }

}