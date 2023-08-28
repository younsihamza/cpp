#include <iostream>
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    try
    {
        Bureaucrat a("hamza",100);
        PresidentialPardonForm t("hamza");
        a.signForm(t);
        t.execute(a);
        std::cout << a << std::endl;
    }
    catch(std::exception & e)
    {
        std::cout << "EXCEPTION : " << e.what() << std::endl;
    }
}