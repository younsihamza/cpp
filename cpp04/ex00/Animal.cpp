#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called "<<std::endl;
    type = "none";
}

Animal::Animal(std::string type):type(type)
{
    std::cout << "Animal constucotr called  " <<std::endl;
}

Animal::Animal(Animal& main)
{
    std::cout << "Animal copy constructor  called "<<std::endl;
    if(&main != this)
        *this  = main; 
}

Animal& Animal::operator=(Animal& main)
{
    std::cout << "copy assigment constructor called "<<std::endl;
    if(&main != this)
        this->type = main.type;
    return *this;
}

Animal::~Animal()
{
    std::cout <<"Animal destructor called " <<std::endl;
}

void Animal::makeSound()const
{
    std::cout << "animal make sound"<<std::endl;
}

std::string  Animal::getType()const 
{
    return type;
}