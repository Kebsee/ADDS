#ifndef PLAYER_H
#define PLAYER_H

#include <string>
using namespace std;
class Player {
public:
    virtual char makeMove() = 0; // pure virtual function, must be implemented in derived classes
    string getName() const; // const member function, returns the name of the player

protected:
    string name;
};

#endif