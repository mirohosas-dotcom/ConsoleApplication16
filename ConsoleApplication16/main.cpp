#include <iostream>
#include "SlotMachine.h"

using namespace std;

int main()
{
    system("chcp 65001 > nul");

    SlotMachine game;

    cout << "ОДНОРУКИЙ БАНДИТ" << endl;
    cout << "Натисніть Enter для обертання барабанів..." << endl;

    cin.get();

    game.Spin();
}