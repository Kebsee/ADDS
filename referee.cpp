// Referee.h
#include"referee.h"
#include<iostream>
class Referee {
  public:
    Referee() {}
    Player* refGame(Player* player1, Player* player2) {
      char move1 = player1->makeMove();
      char move2 = player2->makeMove();

      if (move1 == move2) {
        std::cout << "It's a tie!" << std::endl;
        return nullptr;
      } else if ((move1 == 'R' && move2 == 'S') ||
                 (move1 == 'P' && move2 == 'R') ||
                 (move1 == 'S' && move2 == 'P')) {
        std::cout << player1->getName() << " wins!" << std::endl;
        return player1;
      } else {
        std::cout << player2->getName() << " wins!" << std::endl;
        return player2;
      }
    }
};