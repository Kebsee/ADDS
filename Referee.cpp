#include "Referee.h"

Referee::Referee() {}

Player* Referee::refGame(Player* player1, Player* player2) {
    char move1 = player1->makeMove(); // player 1 makes a move
    char move2 = player2->makeMove(); // player 2 makes a move

    if (move1 == move2) {
        return nullptr; // it's a tie
    }
    else if ((move1 == 'R' && move2 == 'S') || (move1 == 'S' && move2 == 'P') || (move1 == 'P' && move2 == 'R')) {
        return player1; // player 1 wins
    }
    else {
        return player2; // player 2 wins
    }
}