#include <iostream>
#include "Human.h"
#include "Computer.h"
#include "Referee.h"
using namespace std;

int main() {
    // create players
    Human player1("Jake");
    Computer player2;

    // create referee
    Referee referee;

    // referee the game and get the winning player
    Player* winner = referee.refGame(&player1, &player2);

    // print the result
    if (winner == nullptr) {
        cout << "It is a tie" << endl;
    }
    else {
        cout << winner->getName() << " Wins." << endl;
    }

    return 0;
}