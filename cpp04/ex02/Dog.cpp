#include "Dog.hpp"

Dog::Dog()
{
    std::cout<<"Dog default constructor called "<<std::endl;
    type = "Dog";
    brain = new Brain();
}

Dog::Dog(const Dog& main)
{
    std::cout << " copy  constractor called  " <<std::endl;
    if(this != &main)
        *this = main;
}

Dog& Dog::operator=(const Dog& main)
{
    std::cout << "copy assigment constructor called " <<std::endl;
     if(this!=&main)
    {
        type = main.type;
        this->brain = new Brain();
        for(int i = 0; i < 100 ;i++)
            this->brain->setIdeas(i,main.brain->getIdeas(i));
    }
    return *this;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog destructor called  " <<std::endl;
}

void Dog::makeSound()const
{
    std::cout << "dog sound"<<std::endl;
}