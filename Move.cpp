#include "Move.h"

Move::~Move()
{

}

bool Ninja::compare(Move * other){
        string opponent = other->getName();
        if (opponent == "Pirate" ||opponent == "Zombie") {
            return true;
        }
        return false;

            };
            string Ninja::getName(){
                return "Ninja";
            };

 bool Monkey::compare(Move * other){
                string opponent = other->getName();
        if (opponent == "Ninja" ||opponent == "Robot") {
            return true;
        }
        return false;

            };
            string Monkey::getName(){
                return "Monkey";
            };

bool Paper::compare(Move * other){
    string opponent = other->getName();
    if (opponent == "Rock") {
        return true;
    }
    return false;

};
string Paper::getName(){
    return "Paper";
};

bool Pirate::compare(Move * other){
                string opponent = other->getName();
        if (opponent == "Robot" ||opponent == "Monkey") {
            return true;
        }
        return false;

            };
            string Pirate::getName(){
                return "Pirate";
            };

bool Robot::compare(Move * other){
                string opponent = other->getName();
        if (opponent == "Ninja" ||opponent == "Zombie") {
            return true;
        }
        return false;

            };
            string Robot::getName(){
                return "Robot";
            };

bool Rock::compare(Move * other){
            string opponent = other->getName();
    if (opponent == "Scissors") {
        return true;
    }
    return false;

        };

        string Rock::getName(){
            return "Rock";
        };

bool Scissors::compare(Move * other){
            string opponent = other->getName();
    if (opponent == "Paper") {
        return true;
    }
    return false;

        };
string Scissors::getName(){
            return "Scissors";
        };

bool Zombie::compare(Move * other){
                string opponent = other->getName();
        if (opponent == "Pirate" ||opponent == "Monkey") {
            return true;
        }
        return false;

            };
            string Zombie::getName(){
                return "Zombie";
            };
