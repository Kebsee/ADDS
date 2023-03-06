
#include"player.h"
#ifndef COMPUTER_H

class Computer : public Player {
  public:
    char makeMove();
    std::string getName();
};

#endif //  COMPUTER_H
