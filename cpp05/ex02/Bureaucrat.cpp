#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat():name("none"),grade(1)
{

}

Bureaucrat::Bureaucrat(const std::string& name , int grade):name(name)
{
    if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if(grade > 150 )
        throw Bureaucrat::GradeTooLowException();
    this->grade = grade;
}

Bureaucrat::Bureaucrat( const Bureaucrat& main):name(main.name)
{
    if(&main != this)
        *this = main;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& main)
{
    if(&main != this)
        this->grade = main.grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{

}

const std::string& Bureaucrat::getName()const 
{
    return name;
}

int Bureaucrat::getGrade()const
{
    return grade;
}

void Bureaucrat::increament()
{
    if(grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    grade--;
}

void Bureaucrat::decrement()
{
    if(grade + 1 < 150)
        throw Bureaucrat::GradeTooLowException();
    grade++;
}

void Bureaucrat::signForm(Form& frm)
{
    if(frm.getSign() == true)
        std::cout << name << " couldn't sign " << frm.getName()<<" because already sigend"<<std::endl; 
    else
        {
            frm.beSigned(*this);
            std::cout << name << " signed " << frm.getName() <<std::endl;
        }
}

const char* Bureaucrat::GradeTooHighException::what()const throw()
{
    return "Bureaucrat grade too high";
}

const char* Bureaucrat::GradeTooLowException::what()const throw()
{
    return "Bureaucrat grade too Low";
}

std::ostream& operator<<(std::ostream& out , const Bureaucrat& main)
{
    out << main.getName() <<", bureaucrat grade " << main.getGrade() << ".";
    return out;
}

void Bureaucrat::executeForm(Form const & form)
{
    form.execute(*this);
    std::cout << name << "executed " << form.getName() <<std::endl;
}