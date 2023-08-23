#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain& main);
        Brain& operator=(const Brain& main);
        ~Brain();

        void setIdeas(int i,std::string replace );
        std::string getIdeas(int i)const ;
};

#endif