#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
class ShrubberyCreationForm : public  Form
{
    private:
        const std::string target; 
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string& target);
        ShrubberyCreationForm(const ShrubberyCreationForm& main);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm& main);
        ~ShrubberyCreationForm();
        void execute(Bureaucrat const & executor) const;
};
#endif