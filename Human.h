#ifndef HUMAN_H
#define HUMAN_H
#pragma once

#include "Player.h"
#include<iostream>
#include<string>


class Human :public Player
{
private:
        string name;
    public:
        Human(string name = "Human");

        Move * makeMove();
        string getName();

};
#endif