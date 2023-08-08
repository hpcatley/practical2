// Human-Object header file

// Description  
//      Note that Human is a sub-class of Player.


#ifndef HUMAN_H
#define HUMAN_H
#include <string>
#include "Player.h"
#include "Move.h"

class Human : public Player {
    protected:
        std::string name;
        std::string move;
    
    public:
        Human(); // Constructor
        Human(std::string name);
        std::string getName() override;
        Move * makeMove() override;
};

#endif
