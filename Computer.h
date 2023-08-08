// Computer-Object header file

// Description  
//      Note that Computer is a sub-class of Player.

#ifndef COMPUTER_H
#define COMPUTER_H
#include <string>
#include <iostream>
#include "Player.h"
#include "Move.h"

using namespace std;

class Computer : public Player {
    private:
        string name;
    public:
        Computer(); // Constructor
        string getName() override;
        Move * makeMove() override;
};

#endif