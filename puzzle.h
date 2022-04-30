#include <iostream>
#include <vector>
using namespace std;

void printStartingMenu()
{
    cout << "-------------------------------------------------" << endl;
    cout << "|                                               |" << endl;
    cout << "|       Welcome to my 8 puzzle solver!          |" << endl;
    cout << "|                                               |" << endl;
    cout << "|    Please enter your puzzle as a string:      |" << endl;
    cout << "|                                               |" << endl;
    cout << "|                                               |" << endl;
    cout << "-------------------------------------------------" << endl;
}


void printPuzzle(int input[9])
{

    cout << "------------------" << endl;
    cout << "|                |" << endl;
    cout << "| " << input[0] << "     " << input[1] << "     " << input[2] << "  |" << endl;
    cout << "|                |" << endl;
    cout << "| " << input[3] << "     " << input[4] << "     " << input[5] << "  |" << endl;
    cout << "|                |" << endl;
    cout << "| " << input[6] << "     " << input[7] << "     " << input[8] << "  |" << endl;
    cout << "|                |" << endl;
    cout << "------------------" << endl;
}
