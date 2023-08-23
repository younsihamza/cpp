#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal& main);
        WrongAnimal& operator=(WrongAnimal& main);
        virtual void makeSound()const;
        std::string getType()const ;
        virtual ~WrongAnimal();
};

#endif