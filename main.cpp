#include <iostream>
#include <vector>

using namespace std;

void printStartingMenu() {
    cout << "-------------------------------------------------" << endl;
    cout << "|                                               |" << endl;
    cout << "|       Welcome to my 8 puzzle solver!          |" << endl;
    cout << "|                                               |" << endl;
    cout << "|    Please enter your puzzle as a string:      |" << endl;
    cout << "|                                               |" << endl;
    cout << "|                                               |" << endl;
    cout << "-------------------------------------------------" << endl;
}


void printPuzzle(vector<vector<int>> input) {
    for ( int i = 0; i < 3; i++ ) {
        for ( int j = 0; j < 3; j++ ) {
           cout << input[i][j] << endl;
        }
    }
}

int main() {

    // Initializes the vector we read from the user to solve! 
    vector<vector<int>> vec(3, vector<int> (3));


    printStartingMenu();
    cout << "Enter 8 puzzle: " << endl;


    for ( int i = 0; i < 3; i++ ) {
        for ( int j = 0; j < 3; j++ ) {
            cin >> vec[i][j];
        }
    }

    printPuzzle(vec);



    return 0;
}