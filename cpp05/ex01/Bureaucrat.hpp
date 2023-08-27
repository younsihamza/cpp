#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private:
        const std::string name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(const std::string& name , int grade);
        Bureaucrat( const Bureaucrat& main);
        Bureaucrat& operator=(const Bureaucrat& main);
        ~Bureaucrat();

        const std::string& getName()const ;
        int getGrade()const;
        void increament();
        void decrement();
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

std::ostream& operator<<(std::ostream& out , const Bureaucrat& main);

#endif