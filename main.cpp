#include"referee.h"
#include"computer.h"
#include "human.h"

int main() {
  Referee referee;
  Human human("Jake");
  Computer computer;

  Player* winner = referee.refGame(&human, &computer);

  if (winner == nullptr) {
    std::cout << "It's a tie!" << std::endl;
  } else {
    std::cout << winner->getName() << " wins!" << std::endl;
  }

  return 0;
}