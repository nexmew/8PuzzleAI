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

    int newPuzzle[9];
    int temp;
    int blank;

    // Load puzzle
    for (int i = 0; i < 9; i++)
    {
        newPuzzle[i] = this->puzzle[i];
    }

    if (this->blankIndex == 0 || this->blankIndex == 1 || this->blankIndex == 2)
    {
        cout << "move not possible!" << endl;
    }
    else if (this->blankIndex == 3)
    {
        swap(newPuzzle[3], newPuzzle[0]);
        blank = 0;
    }
    else if (this->blankIndex == 4)
    {
        swap(newPuzzle[4], newPuzzle[1]);
        blank = 1;
    }
    else if (this->blankIndex == 5)
    {
        swap(newPuzzle[5], newPuzzle[2]);
        blank = 2;
    }
    else if (this->blankIndex == 6)
    {
        swap(newPuzzle[6], newPuzzle[3]);
        blank = 3;
    }
    else if (this->blankIndex == 7)
    {
        swap(newPuzzle[7], newPuzzle[4]);
        blank = 4;
    }
    else if (this->blankIndex == 8)
    {
        swap(newPuzzle[8], newPuzzle[5]);
        blank = 5;
    }

    state *nextState = new state(newPuzzle, blank, 1);

    return nextState;
}

state *state::moveBlankDown(int algorithm)
{

    int newPuzzle[9];
    int temp;
    int blank;

    // Load puzzle
    for (int i = 0; i < 9; i++)
    {
        newPuzzle[i] = this->puzzle[i];
    }

    if (this->blankIndex == 6 || this->blankIndex == 7 || this->blankIndex == 8)
    {
        cout << "move not possible!" << endl;
    }
    else if (this->blankIndex == 0)
    {
        swap(newPuzzle[0], newPuzzle[3]);
        blank = 3;
    }
    else if (this->blankIndex == 1)
    {
        swap(newPuzzle[1], newPuzzle[4]);
        blank = 4;
    }
    else if (this->blankIndex == 2)
    {
        swap(newPuzzle[2], newPuzzle[5]);
        blank = 6;
    }
    else if (this->blankIndex == 3)
    {
        swap(newPuzzle[3], newPuzzle[6]);
        blank = 6;
    }
    else if (this->blankIndex == 4)
    {
        swap(newPuzzle[4], newPuzzle[7]);
        blank = 7;
    }
    else if (this->blankIndex == 5)
    {
        swap(newPuzzle[5], newPuzzle[8]);
        blank = 8;
    }

    state *nextState = new state(newPuzzle, blank, 1);

    return nextState;
}

state *state::moveBlankLeft(int algorithm)
{

    int newPuzzle[9];
    int temp;
    int blank;

    // Load puzzle
    for (int i = 0; i < 9; i++)
    {
        newPuzzle[i] = this->puzzle[i];
    }

    if (this->blankIndex == 0 || this->blankIndex == 3 || this->blankIndex == 6)
    {
        cout << "move not possible!" << endl;
    }
    else if (this->blankIndex == 1)
    {
        swap(newPuzzle[1], newPuzzle[0]);
        blank = 0;
    }
    else if (this->blankIndex == 2)
    {
        swap(newPuzzle[2], newPuzzle[1]);
        blank = 1;
    }
    else if (this->blankIndex == 4)
    {
        swap(newPuzzle[4], newPuzzle[3]);
        blank = 3;
    }
    else if (this->blankIndex == 5)
    {
        swap(newPuzzle[5], newPuzzle[4]);
        blank = 4;
    }
    else if (this->blankIndex == 7)
    {
        swap(newPuzzle[7], newPuzzle[6]);
        blank = 6;
    }
    else if (this->blankIndex == 8)
    {
        swap(newPuzzle[8], newPuzzle[7]);
        blank = 7;
    }

    state *nextState = new state(newPuzzle, blank, 1);

    return nextState;
}

state *state::moveBlankRight(int algorithm)
{

    int newPuzzle[9];
    int temp;
    int blank;

    // Load puzzle
    for (int i = 0; i < 9; i++)
    {
        newPuzzle[i] = this->puzzle[i];
    }

    if (this->blankIndex == 2 || this->blankIndex == 5 || (this->blankIndex == 8))
    {
        cout << "move not possible!" << endl;
    }
    else if (this->blankIndex == 0)
    {
        swap(newPuzzle[0], newPuzzle[1]);
        blank = 1;
    }
    else if (this->blankIndex == 1)
    {
        swap(newPuzzle[1], newPuzzle[2]);
        blank = 2;
    }
    else if (this->blankIndex == 3)
    {
        swap(newPuzzle[3], newPuzzle[4]);
        blank = 4;
    }
    else if (this->blankIndex == 4)
    {
        swap(newPuzzle[4], newPuzzle[5]);
        blank = 5;
    }
    else if (this->blankIndex == 6)
    {
        swap(newPuzzle[6], newPuzzle[7]);
        blank = 7;
    }
    else if (this->blankIndex == 7)
    {
        swap(newPuzzle[7], newPuzzle[8]);
        blank = 8;
    }

    state *nextState = new state(newPuzzle, blank, 1);

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

    queue.push(puzzle);

    while (queue.size() != 0)
    {
        // Exploring the least costly node and removing it from the priority queue!
        exploringNode = queue.top();
        queue.pop();
        cout << "queue entered" << endl;

        // Checking for goal state!
        for (int i = 0; i < 9; i++)
        {

            if (exploringNode->puzzle[i] != goal[i]) {
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