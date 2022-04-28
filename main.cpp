#include <iostream>
#include <vector>
#include "puzzle.h"

using namespace std;

int main()
{

    // Initializes the vector we read from the user to solve!
    vector<vector<int>> vec(3, vector<int>(3));

    printStartingMenu();
    
    cout << "Enter 8 puzzle: " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> vec[i][j];
        }
    }

    printPuzzle(vec);

    return 0;
}