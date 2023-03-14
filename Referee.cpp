#include "Referee.h"

Referee::Referee() {}

Player * Referee::refGame(Player * player1, Player * player2) {
    Move * move1 = player1->makeMove();
    Move * move2 = player2->makeMove();

    // Determine the winner using the moves
    if (move1->compare(move2)) {
        delete move2;
        return player1;
    } else if (move2->compare(move1)) {
        delete move1;
        return player2;
    } else {
        delete move1;
        delete move2;
        return nullptr;
    }
}


Referee::~Referee() {

}