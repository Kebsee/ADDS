#include "player.h"
#include<iostream>

#ifndef HUMAN_H

class Human : public Player {
  private:
    std::string m_name;
  public:
    Human(std::string name = "Human");
    char makeMove();
    std::string getName();
  
};
#endif // HUMAN_H
