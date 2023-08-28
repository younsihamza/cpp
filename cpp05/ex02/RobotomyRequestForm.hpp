#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
 class RobotomyRequestForm: public Form 
 {
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(const std::string& target);
        RobotomyRequestForm(const RobotomyRequestForm& main);
        RobotomyRequestForm& operator=(const RobotomyRequestForm& main);
        ~RobotomyRequestForm();
    
        void execute(Bureaucrat const & executor)const ;
 } ;
#endif