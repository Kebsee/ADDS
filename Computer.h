#ifndef COMPUTER_H
#define COMPUTER_H

#pragma once
#include"Player.h"
class Computer : public Player{
private:
        string name;
    public:
        Computer(string name = "Computer");
        Move * makeMove();
        string getName();
};



#endif