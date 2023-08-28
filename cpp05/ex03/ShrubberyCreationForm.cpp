#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm():Form("ShrubberyCreationForm",145,137),target("home")
{}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target):Form("ShrubberyCreationForm",145,137),target(target)
{}
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& main):Form("ShrubberyCreationForm",145,137),target(main.target)
{
    if(&main != this)
        *this = main;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& main)
{
    if(&main != this)
        this->setSign(main.getSign());
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void printTree(std::ofstream &out)
{
    out << "          /\\" <<std::endl;
    out << "         /  \\" <<std::endl;
    out << "        /    \\" <<std::endl;
    out << "       /      \\" <<std::endl;
    out << "      /        \\" <<std::endl;
    out << "     /          \\" <<std::endl;
    out << "    /            \\" <<std::endl;
    out << "   /              \\" <<std::endl;
    out << "   ----------------" <<std::endl;
    out << "          |||" <<std::endl;
    out << "          |||" <<std::endl;
    out << "          |||" <<std::endl;
    out << "          |||" <<std::endl;
    out << "          ---" <<std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if(getSign() == false)
        throw NoSignedFormException();
    if(executor.getGrade() > this->getGradeToExecute())
        throw GradeTooLowException();
    std::ofstream out;
    out.open(target,std::ios::app);
    if(!out.is_open())
    {
        std::cout << "file did not open "<<std::endl;
        exit(0);
    }
    printTree(out);
    out.close();
}