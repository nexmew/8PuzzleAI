#include "state.h"
#include "puzzle.h"
#include <queue>
#include <iostream>

using namespace std;


state::state(int puzzle[9], int zeroIndex, int algorithm, int depth, int heuristic, int estimatedCost)
{

    for (int i = 0; i < 9; i++)
    {
        this->puzzle[i] = puzzle[i];
    }

    this->zeroIndex = zeroIndex;
    this->algorithm = algorithm;
    this->depth = depth;
    this->heuristic = heuristic;
    this->estimatedCost = estimatedCost;
}


state *state::moveZeroUp(int algorithm)
{

    state *nextState;

    int updatedPuzzle[9];
    int updatedDepth;
    int updatedZero = 0;
    int updatedHeuristic;
    int updatedEstimatedCost;
    int updatedAlgorithm = algorithm;
    int column = zeroIndex % 3;
    int row = zeroIndex / 3;

    // I calulated where the new zero should be based on the row and column index of 0 (the zero)
    if (zeroIndex == 3 || zeroIndex == 4 || zeroIndex == 5)
    {
        updatedZero = row + column - 1;
    }
    else if (zeroIndex == 6 || zeroIndex == 7 || zeroIndex == 8)
    {
        updatedZero = row + column + 1;
    }

    // Load puzzle
    for (int i = 0; i < 9; i++)
    {
        updatedPuzzle[i] = this->puzzle[i];
    }

    int temp = updatedPuzzle[this->zeroIndex];
    updatedPuzzle[this->zeroIndex] = updatedPuzzle[updatedZero];
    updatedPuzzle[updatedZero] = temp;

    if (algorithm == 1)
    {
        updatedHeuristic = 0;
    }
    else if (algorithm == 2)
    {
        updatedHeuristic = misplacedTileHeuristic(updatedPuzzle);
    }
    else if (algorithm == 3)
    {
        updatedHeuristic = euclideanDistanceHeuristic(updatedPuzzle);
    }

    // Swap
    updatedAlgorithm = algorithm;
    updatedDepth = this->depth + 1;
    updatedEstimatedCost = updatedHeuristic + updatedDepth;

    nextState = new state(updatedPuzzle, updatedZero, updatedAlgorithm, updatedDepth, updatedHeuristic, updatedEstimatedCost);

    return nextState;
}


state *state::moveZeroDown(int algorithm)
{

    int updatedPuzzle[9];
    int updatedZero = 0;
    int updatedDepth;
    int updatedHeuristic;
    int updatedEstimatedCost;
    int updatedAlgorithm = algorithm;
    int temp;
    int column = zeroIndex % 3;
    int row = zeroIndex / 3;

    // I calulated where the new zero should be based on the row and column index of 0 (the zero)
    if (zeroIndex == 0 || zeroIndex == 1 || zeroIndex == 2)
    {
        updatedZero = row + column + 3;
    }
    else if (zeroIndex == 3 || zeroIndex == 4 || zeroIndex == 5)
    {
        updatedZero = row + column + 5;
    }

    // Load puzzle
    for (int i = 0; i < 9; i++)
    {
        updatedPuzzle[i] = this->puzzle[i];
    }

    temp = updatedPuzzle[this->zeroIndex];
    updatedPuzzle[this->zeroIndex] = updatedPuzzle[updatedZero];
    updatedPuzzle[updatedZero] = temp;

    if (algorithm == 1)
    {
        updatedHeuristic = 0;
    }
    else if (algorithm == 2)
    {
        updatedHeuristic = misplacedTileHeuristic(updatedPuzzle);
    }
    else if (algorithm == 3)
    {
        updatedHeuristic = euclideanDistanceHeuristic(updatedPuzzle);
    }

    // Swap
    updatedAlgorithm = algorithm;
    updatedDepth = this->depth + 1;
    updatedEstimatedCost = updatedHeuristic + updatedDepth;

    state *nextState;
    nextState = new state(updatedPuzzle, updatedZero, updatedAlgorithm, updatedDepth, updatedHeuristic, updatedEstimatedCost);

    return nextState;
}


state *state::moveZeroLeft(int algorithm)
{

    int updatedPuzzle[9];
    int updatedZero = 0;
    int updatedDepth;
    int updatedHeuristic;
    int updatedEstimatedCost;
    int updatedAlgorithm = algorithm;
    int temp;
    int column = zeroIndex % 3;
    int row = zeroIndex / 3;

    // I calulated where the new zero should be based on the row and column index of 0 (the zero)
    if (zeroIndex == 1 || zeroIndex == 2)
    {
        updatedZero = row + column - 1;
    }
    else if (zeroIndex == 4 || zeroIndex == 5)
    {
        updatedZero = row + column + 1;
    }
    else if (zeroIndex == 7 || zeroIndex == 8)
    {
        updatedZero = row + column + 3;
    }

    // Load puzzle
    for (int i = 0; i < 9; i++)
    {
        updatedPuzzle[i] = this->puzzle[i];
    }

    // Swap
    temp = updatedPuzzle[this->zeroIndex];
    updatedPuzzle[this->zeroIndex] = updatedPuzzle[updatedZero];
    updatedPuzzle[updatedZero] = temp;

    if (algorithm == 1)
    {
        updatedHeuristic = 0;
    }
    else if (algorithm == 2)
    {
        updatedHeuristic = misplacedTileHeuristic(updatedPuzzle);
    }
    else if (algorithm == 3)
    {
        updatedHeuristic = euclideanDistanceHeuristic(updatedPuzzle);
    }

    updatedAlgorithm = algorithm;
    updatedDepth = this->depth + 1;
    updatedEstimatedCost = updatedHeuristic + updatedDepth;

    state *nextState;
    nextState = new state(updatedPuzzle, updatedZero, updatedAlgorithm, updatedDepth, updatedHeuristic, updatedEstimatedCost);

    return nextState;
}

state *state::moveZeroRight(int algorithm)
{
    int updatedPuzzle[9];
    int updatedZero = 0;
    int updatedDepth;
    int updatedHeuristic;
    int updatedEstimatedCost;
    int updatedAlgorithm = algorithm;
    int temp;
    int column = zeroIndex % 3;
    int row = zeroIndex / 3;

    // I calulated where the new zero should be based on the row and column index of 0 (the zero)
    if (zeroIndex == 0 || zeroIndex == 1)
    {
        updatedZero = row + column + 1;
    }
    else if (zeroIndex == 3 || zeroIndex == 4)
    {
        updatedZero = row + column + 3;
    }
    else if (zeroIndex == 6 || zeroIndex == 7)
    {
        updatedZero = row + column + 5;
    }

    // Load puzzle
    for (int i = 0; i < 9; i++)
    {
        updatedPuzzle[i] = this->puzzle[i];
    }

    // Swap
    temp = updatedPuzzle[this->zeroIndex];
    updatedPuzzle[this->zeroIndex] = updatedPuzzle[updatedZero];
    updatedPuzzle[updatedZero] = temp;

    if (algorithm == 1)
    {
        updatedHeuristic = 0;
    }
    else if (algorithm == 2)
    {
        updatedHeuristic = misplacedTileHeuristic(updatedPuzzle);
    }
    else if (algorithm == 3)
    {
        updatedHeuristic = euclideanDistanceHeuristic(updatedPuzzle);
    }

    updatedAlgorithm = algorithm;
    updatedDepth = this->depth + 1;
    updatedEstimatedCost = updatedHeuristic + updatedDepth;

    state *nextState;
    nextState = new state(updatedPuzzle, updatedZero, updatedAlgorithm, updatedDepth, updatedHeuristic, updatedEstimatedCost);

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
        cout << "                  " << endl;    
}

// Uniform cost search uses a priority queue to explore the states by the least cost
void uniformCostSearch(state *puzzle, int algorithm)
{

    // Goal array to check against
    int goal[9] = {1, 2, 3, 4, 5, 6, 7, 8, 0};
    // Queue to hold each state of the puzzle
    auto comparison = [](state* input1, state* input2) { return (input1->estimatedCost >= input2->estimatedCost);};
    priority_queue<state *, vector<state *>, decltype(comparison)> queue(comparison);
    // Exploring node is the current node we are exploring!
    state *exploringNode;
    // We initialize states viewed to 1 to begin
    int statesViewed = 1;
    // Uniform cost search is option 1 and we need this variable to move the puzzle!
    int alg = algorithm;

    queue.push(puzzle);

    while (queue.size() != 0)
    {
        // Exploring the least costly node and removing it from the priority queue!
        exploringNode = queue.top();
        queue.pop();
        //cout << "queue entered" << endl;

        // Checking for goal state!
        for (int i = 0; i < 9; i++)
        {
            // if any index of current node isnt the the value of goal, break
            if (exploringNode->puzzle[i] != goal[i])
            {
                break;
            }

            else if (exploringNode->puzzle[i] == goal[i] && (i == 8))
            {
                cout << "Puzzle solved!" << endl;
                exploringNode->printPuzzle();
                cout << "States viewed: " << statesViewed << endl;
                cout << "Estimated cost: " << exploringNode->estimatedCost << endl;
                cout << "Depth: " << exploringNode->depth << endl;
                return;
            }
        }

        statesViewed += 1;
        exploringNode->printPuzzle();

        /*
                0 1 2
                3 4 5                 <--- Indices
                6 7 8
                            */

        // We want to push every possible move given the index of 0!                   

        if (exploringNode->zeroIndex == 0)
        {
            queue.push(exploringNode->moveZeroDown(algorithm));
            queue.push(exploringNode->moveZeroRight(algorithm));
        }
        else if (exploringNode->zeroIndex == 1)
        {
            queue.push(exploringNode->moveZeroDown(algorithm));
            queue.push(exploringNode->moveZeroLeft(algorithm));
            queue.push(exploringNode->moveZeroRight(algorithm));
        }
        else if (exploringNode->zeroIndex == 2)
        {
            queue.push(exploringNode->moveZeroDown(algorithm));
            queue.push(exploringNode->moveZeroLeft(algorithm));
        }
        else if (exploringNode->zeroIndex == 3)
        {
            queue.push(exploringNode->moveZeroUp(algorithm));
            queue.push(exploringNode->moveZeroDown(algorithm));
            queue.push(exploringNode->moveZeroRight(algorithm));
        }
        else if (exploringNode->zeroIndex == 4)
        {
            queue.push(exploringNode->moveZeroUp(algorithm));
            queue.push(exploringNode->moveZeroDown(algorithm));
            queue.push(exploringNode->moveZeroLeft(algorithm));
            queue.push(exploringNode->moveZeroRight(algorithm));
        }
        else if (exploringNode->zeroIndex == 5)
        {
            queue.push(exploringNode->moveZeroUp(algorithm));
            queue.push(exploringNode->moveZeroDown(algorithm));
            queue.push(exploringNode->moveZeroLeft(algorithm));
        }
        else if (exploringNode->zeroIndex == 6)
        {
            queue.push(exploringNode->moveZeroUp(algorithm));
            queue.push(exploringNode->moveZeroRight(algorithm));
        }
        else if (exploringNode->zeroIndex == 7)
        {
            queue.push(exploringNode->moveZeroUp(algorithm));
            queue.push(exploringNode->moveZeroLeft(algorithm));
            queue.push(exploringNode->moveZeroRight(algorithm));
        }
        else if (exploringNode->zeroIndex == 8)
        {
            queue.push(exploringNode->moveZeroUp(algorithm));
            queue.push(exploringNode->moveZeroLeft(algorithm));
        }
        else
        {
            cout << "zero index error!" << endl;
        }
    }
    cout << "error" << endl;
}