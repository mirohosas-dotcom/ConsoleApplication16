#include <iostream>
#include <ctime>
#include "SlotMachine.h"

using namespace std;

SlotMachine::SlotMachine()
{
    symbols[0] = '7';
    symbols[1] = 'A';
    symbols[2] = 'B';
    symbols[3] = 'C';
    symbols[4] = 'D';

    srand(time(0));
}

void SlotMachine::Spin()
{
    char first;
    char second;
    char third;

    first = symbols[rand() % 5];
    second = symbols[rand() % 5];
    third = symbols[rand() % 5];

    ShowResult(first, second, third);
}

void SlotMachine::ShowResult(char first, char second, char third)
{
    cout << endl;

    cout << "[ " << first << " ] ";
    cout << "[ " << second << " ] ";
    cout << "[ " << third << " ]" << endl;

    if (first == '7' && second == '7' && third == '7')
    {
        cout << "ДЖЕКПОТ! Ви виграли 1000 очок!" << endl;
    }
    else if (first == second && second == third)
    {
        cout << "ВИГРАШ! Ви отримали 500 очок!" << endl;
    }
    else if (first == second || first == third || second == third)
    {
        cout << "Невеликий виграш! Ви отримали 100 очок!" << endl;
    }
    else
    {
        cout << "Ви програли." << endl;
    }
}