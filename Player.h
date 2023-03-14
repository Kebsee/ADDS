#ifndef PLAYER_H
#define PLAYER_H
#pragma once

#include"Move.h"
class Player
{
public:
        virtual Move * makeMove() = 0;
        virtual string getName() = 0;
        virtual ~Player();

private:

};

#endif