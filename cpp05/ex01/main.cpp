#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("hamza",1);
        std::cout << a << std::endl;
        a.increament();
    }
    catch(std::exception & e)
    {
        std::cout << "EXCEPTION : " << e.what()<<std::endl;
    }
    
}