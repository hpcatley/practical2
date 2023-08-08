// Computer-Object cpp file

// Description  
//      The Computer only plays Rock and it's name is Computer
//      Note that it is a sub-class of Player.
#include <iostream>
#include <string>
#include "Computer.h"

using namespace std;

Computer::Computer(){
    name = "Computer";
}

string Computer::getName() {
    return name;
}

char Computer::makeMove() {
    char move = 'R'; 
    return move;
}

