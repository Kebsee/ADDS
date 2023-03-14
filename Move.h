#ifndef MOVE_H
#define MOVE_H

#pragma once
#include<string>
using namespace std;
class Move
{
public:
        virtual bool compare(Move * other) = 0;
        virtual string getName() = 0;
        virtual ~Move();

private:

};



class Monkey : public Move
{
public:
     bool compare(Move * other);
            string getName();

private:

};

class Ninja : public Move
{
public:
    bool compare(Move * other);
            string getName();

private:

};


class Paper : public Move
{
public:
    bool compare(Move * other);
    string getName();

private:

};



class Pirate : public Move
{
public:
    bool compare(Move * other);
    string getName();

private:

};

class Robot : public Move
{
public:
            bool compare(Move * other);
            string getName();
};

class Rock :public Move
{
public:
    bool compare(Move * other);
        string getName();

private:

};

class Scissors :public Move
{
public:
    bool compare(Move * other);
    string getName();

private:

};

class Zombie : public Move
{
public:
   bool compare(Move * other);
            string getName();

private:

};
#endif