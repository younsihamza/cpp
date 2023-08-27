#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Form
{
    private:
        const std::string name;
        bool sign;
        const int  gradeToSign;
        const int gradeToExecute;
    public:
        Form();
        Form(const std::string& name);
        Form(const Form& main);
        Form& operator=(const Form& main);
        ~Form();

        void beSigned();
        void signForm();

         class GradeTooHighException : public std::exception
        {
            public:
               const char* what() const throw();
        };

        class GradeTooLowException : public std::exception
        {
            public:
               const char* what() const throw();
        };
};

#endif