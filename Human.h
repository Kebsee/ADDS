#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
using namespace std;
class Human : public Player {
public:
    Human(const string& name = "Human"); 
    char makeMove() ; 
};

#endif