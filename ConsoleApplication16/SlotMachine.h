#pragma once
class SlotMachine
{
private:
    char symbols[5];

public:
    SlotMachine();

    void Spin();
    void ShowResult(char first, char second, char third);
};