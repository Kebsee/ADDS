#ifndef REFEREE_H
#define REFEREE_H

#pragma once
#include"Player.h"

class Referee
{
public:
    Referee();

Player * refGame(Player * player1, Player * player2);
~Referee();
private:

};

#endif