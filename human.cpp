#include "human.h"
#include<iostream>
class Human : public Player {
  public:
    Human(std::string name = "Human") : m_name(name) {}
    char makeMove() override {
      char move;
      std::cout << "Enter your move (R/P/S): ";
      std::cin >> move;
      return toupper(move);
    }
    std::string getName() override {
      return m_name;
    }
  private:
    std::string m_name;
};
