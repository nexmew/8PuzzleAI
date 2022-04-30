#include <iostream>
#include <queue>
#include "state.h"


using namespace std;


// Uniform cost search uses a priority queue to explore the states by the least cost
void uniformCostSearch(state* puzzle) {

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