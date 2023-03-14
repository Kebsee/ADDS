#include "Human.h"

Human::Human(string name){
            this->name = name;
        };

        Move * Human::makeMove(){
            cout << "Enter move: ";
            string moveName;
            cin >> moveName;

            // Create a Move object based on the user's input
            if (moveName == "Rock") {
                return new Rock();
            } else if (moveName == "Paper") {
                return new Paper();
            } else if (moveName == "Scissors") {
                return new Scissors();
            }else if (moveName == "Monkey")
            {
            return new Monkey();
            }else if (moveName == "Robot")
            {
            return new Robot();
            }else if (moveName == "Pirate")
            {
            return new Pirate();
            }else if (moveName == "Ninja")
            {
            return new Ninja();
            }else if (moveName == "Zombie")
            {
            return new Zombie();
            } else {
            
                return new Rock();
            }
        };
        string Human::getName(){
            return name;
        };