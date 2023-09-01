#ifndef A_HPP
#define A_HPP

#include "Base.hpp"

class A: public Base{
    public :
        A(){type ="A";}
        void prn()
        {
            std::cout << "hamza youns i is here"<<std::endl ;
        }
};

#endif