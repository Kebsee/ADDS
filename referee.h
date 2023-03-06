#include"player.h"
#include<iostream>
#ifndef REFEREE_H

class Referee {
  public:
    Referee();
    Player* refGame(Player* player1, Player* player2);
};

#endif // !REFEREE_H
