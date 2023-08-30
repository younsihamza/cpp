#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat a("hamza",15);
        Form u("younsi",10,30);
        //u.beSigned(a);
        a.signForm(u);
        std::cout << u <<std::endl;
        std::cout << a << std::endl;
    }
    catch(std::exception & e)
    {
        std::cout << "EXCEPTION : " << e.what() << std::endl;
    }
}