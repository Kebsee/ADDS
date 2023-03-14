#include "Computer.h"

Computer::Computer(string name){
            this->name = name;
        };
        Move * Computer::makeMove(){
            return new Rock();
        };
        string Computer::getName(){
            return name;
        };