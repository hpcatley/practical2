// Referee-Object cpp file

// Description  
//      Note that Referee is its own class
//      The referee will match two players and return a referenece to the winner. Will return nullpointer in case of tie

#include <iostream>
#include "Referee.h"
#include <string>

Referee::Referee() {}

Player *Referee::refGame(Player *player1,Player *player2) 
{
    std::string movep1 = player1->makeMove();
    std::string movep2 = player2->makeMove();

    if((movep1.compare("Monkey") && (movep2.compare("Ninja")) )|| 
       (movep1.compare("Monkey") && (movep2.compare("Robot"))) ||
       ((movep1.compare("Robot")) && (movep2.compare("Ninja"))) || 
       ((movep1.compare("Robot")) && (movep2.compare("Zombie"))) ||
       ((movep1.compare("Pirate")) && (movep2.compare("Robot"))) ||
       ((movep1.compare("Pirate")) && (movep2.compare("Monkey"))) ||
       ((movep1.compare("Zombie")) && (movep2.compare("Pirate")))||
       ((movep1.compare("Zombie")) && (movep2.compare("Zombie")))||
       ((movep1.compare("Ninja")) && (movep2.compare("Pirate")))||
       ((movep1.compare("Ninja")) && (movep2.compare("Monkey")))){
       return player1;
    }
    else if(movep1==movep2) {
        return nullptr  ;
    }
    else {
        return player2;
    }

}

