// Referee-Object header file

// Description  
//      Note that it is its own class
//      The referee will match two players and return a referenece to the winner. Will return nullpointer in case of tie

#ifndef REFEREE_H
#define REFEREE_H
#include "Player.h"

class Referee {
    public:
        Referee();
        Player* refGame(Player* player1,Player* player2);
        
};

#endif