#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
public:
    virtual char makeMove() = 0; // pure virtual function, must be implemented in derived classes
    std::string getName() const; // const member function, returns the name of the player

protected:
    std::string name;
};

#endif