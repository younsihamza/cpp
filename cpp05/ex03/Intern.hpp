#ifndef INTERN_HPP
#define INTERN_HPP
#include "AForm.hpp"
class Intern
{   
    public:
        Intern();
        Intern(const Intern& main);
        Intern& operator=(const Intern& main);
        ~Intern();

        Form* makeForm(const std::string& FormName ,const std::string& target);
};

#endif