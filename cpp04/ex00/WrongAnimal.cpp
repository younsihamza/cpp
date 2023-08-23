#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor called "<<std::endl;
    type = "none";
}

WrongAnimal::WrongAnimal(std::string type):type(type)
{
    std::cout << "WrongAnimal constucotr called  " <<std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal& main)
{
    std::cout << "WrongAnimal copy constructor  called "<<std::endl;
    if(&main != this)
        *this  = main; 
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal& main)
{
    std::cout << "copy assigment constructor called "<<std::endl;
    if(&main != this)
        this->type = main.type;
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout <<"WrongAnimal destructor called " <<std::endl;
}

void WrongAnimal::makeSound()const
{
    std::cout << "WrongAnimal make sound"<<std::endl;
}

std::string  WrongAnimal::getType()const 
{
    return type;
}