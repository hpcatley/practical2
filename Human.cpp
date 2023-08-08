// Human-Object cpp file

// Description  
//      Takes move from user input
//      Note that it is a sub-class of Player.
//      Ensure layout of prompt is "Enter move:"

#include <iostream>
#include "Human.h"
#include <string>
#include "Player.h"

using namespace std;

Human::Human() {
    name = "Human";
}

Human::Human(string Name) {name = Name;}

Move * Human::makeMove() {
    cout << "Enter move:";
    cin >> move;
    return move;
}

string Human::getName() {
    return name;
}






