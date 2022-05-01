#include "state.h"
#include <queue>
#include <iostream>

using namespace std;

state::state(int puzzle[9], int blankIndex, int algorithm, int depth, int heuristic, int estimatedCost)
{

    for (int i = 0; i < 9; i++)
    {
        this->puzzle[i] = puzzle[i];
    }

    this->blankIndex = blankIndex;
    this->algorithm = algorithm;
    this->depth = depth;
    this->heuristic = heuristic;
    this->estimatedCost = estimatedCost;
}

state *state::moveBlankUp(int algorithm)
{

    state *nextState;

    int updatedPuzzle[9];
    int updatedDepth;
    int updatedBlank = 0;
    int updatedHeuristic;
    int updatedEstimatedCost;
    int updatedAlgorithm = algorithm;
    int column = blankIndex % 3;
    int row = blankIndex / 3;

    if (blankIndex == 3 || blankIndex == 4 || blankIndex == 5)
    {
        updatedBlank = row + column - 1;
    }
    else if (blankIndex == 6 || blankIndex == 7 || blankIndex == 8)
    {
        updatedBlank = row + column + 1;
    }

    // Load puzzle
    for (int i = 0; i < 9; i++)
    {
        updatedPuzzle[i] = this->puzzle[i];
    }

    int temp = updatedPuzzle[this->blankIndex];
    updatedPuzzle[this->blankIndex] = updatedPuzzle[updatedBlank];
    updatedPuzzle[updatedBlank] = temp;

    if (algorithm == 1)
    {
        updatedHeuristic = 0;
    }
    else if (algorithm == 2)
    {
        // updatedHeuristic = misplacedTileHeuristic(updatedPuzzle);
    }
    else if (algorithm == 3)
    {
        // updatedHeuristic = euclideanDistanceHeuristic(updatedPuzzle);
    }

    updatedAlgorithm = algorithm;
    updatedDepth = this->depth++;
    updatedEstimatedCost = updatedHeuristic + updatedDepth;

    nextState = new state(updatedPuzzle, updatedBlank, updatedAlgorithm, updatedDepth, updatedHeuristic, updatedEstimatedCost);

    return nextState;
}

state *state::moveBlankDown(int algorithm)
{

    int updatedPuzzle[9];
    int updatedBlank = 0;
    int updatedDepth;
    int updatedHeuristic;
    int updatedEstimatedCost;
    int updatedAlgorithm = algorithm;
    int temp;
    int column = blankIndex % 3;
    int row = blankIndex / 3;

    if (blankIndex == 0 || blankIndex == 1 || blankIndex == 2)
    {
        updatedBlank = row + column + 3;
    }
    else if (blankIndex == 3 || blankIndex == 4 || blankIndex == 5)
    {
        updatedBlank = row + column + 5;
    }

    // Load puzzle
    for (int i = 0; i < 9; i++)
    {
        updatedPuzzle[i] = this->puzzle[i];
    }

    temp = updatedPuzzle[this->blankIndex];
    updatedPuzzle[this->blankIndex] = updatedPuzzle[updatedBlank];
    updatedPuzzle[updatedBlank] = temp;

    if (algorithm == 1)
    {
        updatedHeuristic = 0;
    }
    else if (algorithm == 2)
    {
        // updatedHeuristic = misplacedTileHeuristic(updatedPuzzle);
    }
    else if (algorithm == 3)
    {
        // updatedHeuristic = euclideanDistanceHeuristic(updatedPuzzle);
    }

    updatedAlgorithm = algorithm;
    updatedDepth = this->depth++;
    updatedEstimatedCost = updatedHeuristic + updatedDepth;

    state *nextState;
    nextState = new state(updatedPuzzle, updatedBlank, updatedAlgorithm, updatedDepth, updatedHeuristic, updatedEstimatedCost);

    return nextState;
}

state *state::moveBlankLeft(int algorithm)
{

    int updatedPuzzle[9];
    int updatedBlank = 0;
    int updatedDepth;
    int updatedHeuristic;
    int updatedEstimatedCost;
    int updatedAlgorithm = algorithm;
    int temp;
    int column = blankIndex % 3;
    int row = blankIndex / 3;

    if (blankIndex == 1 || blankIndex == 2)
    {
        updatedBlank = row + column - 1;
    }
    else if (blankIndex == 4 || blankIndex == 5)
    {
        updatedBlank = row + column + 1;
    }
    else if (blankIndex == 7 || blankIndex == 8)
    {
        updatedBlank = row + column + 3;
    }

    // Load puzzle
    for (int i = 0; i < 9; i++)
    {
        updatedPuzzle[i] = this->puzzle[i];
    }

    temp = updatedPuzzle[this->blankIndex];
    updatedPuzzle[this->blankIndex] = updatedPuzzle[updatedBlank];
    updatedPuzzle[updatedBlank] = temp;

    if (algorithm == 1)
    {
        updatedHeuristic = 0;
    }
    else if (algorithm == 2)
    {
        // updatedHeuristic = misplacedTileHeuristic(updatedPuzzle);
    }
    else if (algorithm == 3)
    {
        // updatedHeuristic = euclideanDistanceHeuristic(updatedPuzzle);
    }

    updatedAlgorithm = algorithm;
    updatedDepth = this->depth++;
    updatedEstimatedCost = updatedHeuristic + updatedDepth;

    state *nextState;
    nextState = new state(updatedPuzzle, updatedBlank, updatedAlgorithm, updatedDepth, updatedHeuristic, updatedEstimatedCost);

    return nextState;
}

state *state::moveBlankRight(int algorithm)
{

    int updatedPuzzle[9];
    int updatedBlank = 0;
    int updatedDepth;
    int updatedHeuristic;
    int updatedEstimatedCost;
    int updatedAlgorithm = algorithm;
    int temp;
    int column = blankIndex % 3;
    int row = blankIndex / 3;

    if (blankIndex == 0 || blankIndex == 1)
    {
        updatedBlank = row + column + 1;
    }
    else if (blankIndex == 3 || blankIndex == 4)
    {
        updatedBlank = row + column + 3;
    }
    else if (blankIndex == 6 || blankIndex == 7)
    {
        updatedBlank = row + column + 5;
    }

    // Load puzzle
    for (int i = 0; i < 9; i++)
    {
        updatedPuzzle[i] = this->puzzle[i];
    }

    temp = updatedPuzzle[this->blankIndex];
    updatedPuzzle[this->blankIndex] = updatedPuzzle[updatedBlank];
    updatedPuzzle[updatedBlank] = temp;

    if (algorithm == 1)
    {
        updatedHeuristic = 0;
    }
    else if (algorithm == 2)
    {
        // updatedHeuristic = misplacedTileHeuristic(updatedPuzzle);
    }
    else if (algorithm == 3)
    {
        // updatedHeuristic = euclideanDistanceHeuristic(updatedPuzzle);
    }

    updatedAlgorithm = algorithm;
    updatedDepth = this->depth++;
    updatedEstimatedCost = updatedHeuristic + updatedDepth;

    state *nextState;
    nextState = new state(updatedPuzzle, updatedBlank, updatedAlgorithm, updatedDepth, updatedHeuristic, updatedEstimatedCost);

    return nextState;
}

/*
int misplacedTileHeuristic(int puzzle[9])
{

    return 1;
}

int euclideanDistanceHeuristic(int puzzle[9])
{

    return 5;
}
*/
void state::printPuzzle2()
{
    /*
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
        cout << "Estimated Cost: " << estimatedCost << endl;
        cout << "Depth: " << depth << endl; */
}

// Uniform cost search uses a priority queue to explore the states by the least cost
void uniformCostSearch(state *puzzle, int algorithm)
{

    // Goal array to check against
    int goal[9] = {1, 2, 3, 4, 5, 6, 7, 8, 0};
    // Queue to hold each state of the puzzle
    priority_queue<state *, vector<state *>, greater<int>> queue;
    // Exploring node is the current node we are exploring!
    state *exploringNode;
    // Once solved is true, we will output the array!
    bool solved = false;
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

            if (exploringNode->puzzle[i] != goal[i])
            {
                break;
            }

            else if (exploringNode->puzzle[i] == goal[i] && (i == 8))
            {
                cout << "Puzzle solved!" << endl;
                cout << "States viewed: " << statesViewed << endl;
                exploringNode->printPuzzle2();
                return;
            }
        }

        statesViewed += 1;
        exploringNode->printPuzzle2();

        /*
                0 1 2
                3 4 5                 <--- Indices
                6 7 8
                            */

        if (exploringNode->blankIndex == 0)
        {
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
    cout << "error" << endl;
}