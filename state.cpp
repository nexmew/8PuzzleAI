#include "state.h"
#include <queue>
#include <iostream>

using namespace std;

state::state(int puzzle[9], int blankIndex, int algChoice, int depth, int heuristic, int estimatedCost)
{

    for (int i = 0; i < 9; i++)
    {
        this->puzzle[i] = puzzle[i];
    }

    this->blankIndex = blankIndex;
    this->algChoice = algChoice;
    this->depth = depth;
    this->heuristic = heuristic;
    this->estimatedCost = estimatedCost;
}

state::~state() {}

int misplacedTileHeuristic(int puzzle[9])
{

    return 1;
}

int euclideanDistanceHeuristic(int puzzle[9])
{

    return 5;
}

state *state::moveBlankUp(int algorithm)
{

    int updatedPuzzle[9];
    int updatedBlank;
    int updatedDepth;
    int updatedHeuristic;
    int updatedEstimatedCost;
    int updatedAlgorithm;
    int temp;

    // Load puzzle
    for (int i = 0; i < 9; i++)
    {
        updatedPuzzle[i] = this->puzzle[i];
    }

    if (this->blankIndex == 0 || this->blankIndex == 1 || this->blankIndex == 2)
    {
        cout << "move not possible!" << endl;
    }
    else if (this->blankIndex == 3)
    {
        swap(updatedPuzzle[3], updatedPuzzle[0]);
        updatedBlank = 0;
    }
    else if (this->blankIndex == 4)
    {
        swap(updatedPuzzle[4], updatedPuzzle[1]);
        updatedBlank = 1;
    }
    else if (this->blankIndex == 5)
    {
        swap(updatedPuzzle[5], updatedPuzzle[2]);
        updatedBlank = 2;
    }
    else if (this->blankIndex == 6)
    {
        swap(updatedPuzzle[6], updatedPuzzle[3]);
        updatedBlank = 3;
    }
    else if (this->blankIndex == 7)
    {
        swap(updatedPuzzle[7], updatedPuzzle[4]);
        updatedBlank = 4;
    }
    else if (this->blankIndex == 8)
    {
        swap(updatedPuzzle[8], updatedPuzzle[5]);
        updatedBlank = 5;
    }

    if (algorithm == 1) {
        updatedHeuristic = 0;
    }
    else if (algorithm == 2) {
        updatedHeuristic = misplacedTileHeuristic(updatedPuzzle);
    }
    else if (algorithm == 3) {
        updatedHeuristic = euclideanDistanceHeuristic(updatedPuzzle);
    }

    updatedAlgorithm = algorithm;
    updatedDepth = this->depth++;
    updatedEstimatedCost = updatedHeuristic + updatedDepth;

    state *nextState = new state(updatedPuzzle, updatedBlank, updatedAlgorithm, updatedDepth, updatedHeuristic, updatedEstimatedCost);

    return nextState;
}

state *state::moveBlankDown(int algorithm)
{

    int updatedPuzzle[9];
    int updatedBlank;
    int updatedDepth;
    int updatedHeuristic;
    int updatedEstimatedCost;
    int updatedAlgorithm;
    int temp;

    // Load puzzle
    for (int i = 0; i < 9; i++)
    {
        updatedPuzzle[i] = this->puzzle[i];
    }

    if (this->blankIndex == 6 || this->blankIndex == 7 || this->blankIndex == 8)
    {
        cout << "move not possible!" << endl;
    }
    else if (this->blankIndex == 0)
    {
        swap(updatedPuzzle[0], updatedPuzzle[3]);
        updatedBlank = 3;
    }
    else if (this->blankIndex == 1)
    {
        swap(updatedPuzzle[1], updatedPuzzle[4]);
        updatedBlank = 4;
    }
    else if (this->blankIndex == 2)
    {
        swap(updatedPuzzle[2], updatedPuzzle[5]);
        updatedBlank = 6;
    }
    else if (this->blankIndex == 3)
    {
        swap(updatedPuzzle[3], updatedPuzzle[6]);
        updatedBlank = 6;
    }
    else if (this->blankIndex == 4)
    {
        swap(updatedPuzzle[4], updatedPuzzle[7]);
        updatedBlank = 7;
    }
    else if (this->blankIndex == 5)
    {
        swap(updatedPuzzle[5], updatedPuzzle[8]);
        updatedBlank = 8;
    }

    if (algorithm == 1) {
        updatedHeuristic = 0;
    }
    else if (algorithm == 2) {
        updatedHeuristic = misplacedTileHeuristic(updatedPuzzle);
    }
    else if (algorithm == 3) {
        updatedHeuristic = euclideanDistanceHeuristic(updatedPuzzle);
    }

    updatedAlgorithm = algorithm;
    updatedDepth = this->depth++;
    updatedEstimatedCost = updatedHeuristic + updatedDepth;

    state *nextState = new state(updatedPuzzle, updatedBlank, updatedAlgorithm, updatedDepth, updatedHeuristic, updatedEstimatedCost);

    return nextState;
}

state *state::moveBlankLeft(int algorithm)
{

    int updatedPuzzle[9];
    int updatedBlank;
    int updatedDepth;
    int updatedHeuristic;
    int updatedEstimatedCost;
    int updatedAlgorithm;
    int temp;

    // Load puzzle
    for (int i = 0; i < 9; i++)
    {
        updatedPuzzle[i] = this->puzzle[i];
    }

    if (this->blankIndex == 0 || this->blankIndex == 3 || this->blankIndex == 6)
    {
        cout << "move not possible!" << endl;
    }
    else if (this->blankIndex == 1)
    {
        swap(updatedPuzzle[1], updatedPuzzle[0]);
        updatedBlank = 0;
    }
    else if (this->blankIndex == 2)
    {
        swap(updatedPuzzle[2], updatedPuzzle[1]);
        updatedBlank = 1;
    }
    else if (this->blankIndex == 4)
    {
        swap(updatedPuzzle[4], updatedPuzzle[3]);
        updatedBlank = 3;
    }
    else if (this->blankIndex == 5)
    {
        swap(updatedPuzzle[5], updatedPuzzle[4]);
        updatedBlank = 4;
    }
    else if (this->blankIndex == 7)
    {
        swap(updatedPuzzle[7], updatedPuzzle[6]);
        updatedBlank = 6;
    }
    else if (this->blankIndex == 8)
    {
        swap(updatedPuzzle[8], updatedPuzzle[7]);
        updatedBlank = 7;
    }

    if (algorithm == 1) {
        updatedHeuristic = 0;
    }
    else if (algorithm == 2) {
        updatedHeuristic = misplacedTileHeuristic(updatedPuzzle);
    }
    else if (algorithm == 3) {
        updatedHeuristic = euclideanDistanceHeuristic(updatedPuzzle);
    }

    updatedAlgorithm = algorithm;
    updatedDepth = this->depth++;
    updatedEstimatedCost = updatedHeuristic + updatedDepth;

    state *nextState = new state(updatedPuzzle, updatedBlank, updatedAlgorithm, updatedDepth, updatedHeuristic, updatedEstimatedCost);

    return nextState;
}

state *state::moveBlankRight(int algorithm)
{

    int updatedPuzzle[9];
    int updatedBlank;
    int updatedDepth;
    int updatedHeuristic;
    int updatedEstimatedCost;
    int updatedAlgorithm;
    int temp;

    // Load puzzle
    for (int i = 0; i < 9; i++)
    {
        updatedPuzzle[i] = this->puzzle[i];
    }

    if (this->blankIndex == 2 || this->blankIndex == 5 || (this->blankIndex == 8))
    {
        cout << "move not possible!" << endl;
    }
    else if (this->blankIndex == 0)
    {
        swap(updatedPuzzle[0], updatedPuzzle[1]);
        updatedBlank = 1;
    }
    else if (this->blankIndex == 1)
    {
        swap(updatedPuzzle[1], updatedPuzzle[2]);
        updatedBlank = 2;
    }
    else if (this->blankIndex == 3)
    {
        swap(updatedPuzzle[3], updatedPuzzle[4]);
        updatedBlank = 4;
    }
    else if (this->blankIndex == 4)
    {
        swap(updatedPuzzle[4], updatedPuzzle[5]);
        updatedBlank = 5;
    }
    else if (this->blankIndex == 6)
    {
        swap(updatedPuzzle[6], updatedPuzzle[7]);
        updatedBlank = 7;
    }
    else if (this->blankIndex == 7)
    {
        swap(updatedPuzzle[7], updatedPuzzle[8]);
        updatedBlank = 8;
    }


    if (algorithm == 1) {
        updatedHeuristic = 0;
    }
    else if (algorithm == 2) {
        updatedHeuristic = misplacedTileHeuristic(updatedPuzzle);
    }
    else if (algorithm == 3) {
        updatedHeuristic = euclideanDistanceHeuristic(updatedPuzzle);
    }

    updatedAlgorithm = algorithm;
    updatedDepth = this->depth++;
    updatedEstimatedCost = updatedHeuristic + updatedDepth;

    state *nextState = new state(updatedPuzzle, updatedBlank, updatedAlgorithm, updatedDepth, updatedHeuristic, updatedEstimatedCost);

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
void uniformCostSearch(state *puzzle)
{

    // Goal array to check against
    int goal[9] = {1, 2, 3, 4, 5, 6, 7, 8, 0};
    // Queue to hold each state of the puzzle
    priority_queue<state *> queue;
    // Exploring node is the current node we are exploring!
    state *exploringNode;
    // Once solved is true, we will output the array!
    bool solved = false;
    // We initialize states viewed to 1 to begin
    int statesViewed = 1;
    // Uniform cost search is option 1 and we need this variable to move the puzzle!
    int algorithm = 1;

    vector<int*> storage;

    queue.push(puzzle);

    while (queue.size() != 0)
    {
        // Exploring the least costly node and removing it from the priority queue!
        exploringNode = queue.top();
        queue.pop();
        int count = 0;
        cout << "queue entered" << endl;

/*
        for (int i = 0; i < storage.size(); i++) {

            int test1[storage.size()];
            for (int j = 0; j < storage.size(); j++) {
                int 
                test1[i] = storage.at(i);
            }

            int test2[storage.size()];
            for (int j = 0; j < 9; j++) {
                int temp = this->puzzle[i];
                test2[i] = temp;
            }
            
            for (int k = 0; k < 9; k++) {
                if (test1[i] == test2[i]) {
                    count++;
                    if (count == 9) {
                        queue.pop();
                    }
                }
            }
        }
*/
        // Checking for goal state!
        for (int i = 0; i < 9; i++)
        {

            if (exploringNode->puzzle[i] != goal[i])
            {
                break;
            }

            else if (exploringNode->puzzle[i] == goal[i] && (i == 8))
            {
                cout << "Puzzle solved!" << endl;
                exploringNode->printPuzzle();
                return;
            }
        }

        /*
                // We solved the puzzle!
                if (solved == true)
                {
                    cout << "Puzzle solved!" << endl;
                    exploringNode->printPuzzle();
                    return;
                }
                */
        cout << "State: " << statesViewed << endl;
        statesViewed++;
        exploringNode->printPuzzle();
        storage.push_back(exploringNode->puzzle);


    
        /*
                0 1 2
                3 4 5
                6 7 8
                            */

                          
        if (exploringNode->blankIndex == 0)
        {
            cout << "pushing" << endl;
            queue.push(exploringNode->moveBlankDown(algorithm));
            queue.push(exploringNode->moveBlankRight(algorithm));
        }
        else if (exploringNode->blankIndex == 1)
        {
            queue.push(exploringNode->moveBlankDown(algorithm));
            queue.push(exploringNode->moveBlankLeft(algorithm));
            queue.push(exploringNode->moveBlankRight(algorithm));
        }
        else if (exploringNode->blankIndex == 2)
        {
            queue.push(exploringNode->moveBlankDown(algorithm));
            queue.push(exploringNode->moveBlankLeft(algorithm));
        }
        else if (exploringNode->blankIndex == 3)
        {
            queue.push(exploringNode->moveBlankUp(algorithm));
            queue.push(exploringNode->moveBlankDown(algorithm));
            queue.push(exploringNode->moveBlankRight(algorithm));
        }
        else if (exploringNode->blankIndex == 4)
        {
            queue.push(exploringNode->moveBlankUp(algorithm));
            queue.push(exploringNode->moveBlankDown(algorithm));
            queue.push(exploringNode->moveBlankLeft(algorithm));
            queue.push(exploringNode->moveBlankRight(algorithm));
        }
        else if (exploringNode->blankIndex == 5)
        {
            queue.push(exploringNode->moveBlankUp(algorithm));
            queue.push(exploringNode->moveBlankDown(algorithm));
            queue.push(exploringNode->moveBlankLeft(algorithm));
        }
        else if (exploringNode->blankIndex == 6)
        {
            queue.push(exploringNode->moveBlankUp(algorithm));
            queue.push(exploringNode->moveBlankRight(algorithm));
        }
        else if (exploringNode->blankIndex == 7)
        {
            queue.push(exploringNode->moveBlankUp(algorithm));
            queue.push(exploringNode->moveBlankLeft(algorithm));
            queue.push(exploringNode->moveBlankRight(algorithm));
        }
        else if (exploringNode->blankIndex == 8)
        {
            queue.push(exploringNode->moveBlankUp(algorithm));
            queue.push(exploringNode->moveBlankLeft(algorithm));
        }
        else
        {
            cout << "Blank index error!" << endl;
        }
        
    }
}