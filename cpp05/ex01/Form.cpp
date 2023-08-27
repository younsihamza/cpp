#include "Form.hpp"


Form::Form():name("neno"),sign(false),gradeToSign(50),gradeToExecute(20)
{

}
Form::Form(const std::string& name):name(name),sign(false),gradeToSign(50),gradeToExecute(20)
{

}
Form::Form(const Form& main):name(main.name),gradeToSign(main.gradeToSign),gradeToExecute(main.gradeToExecute)
{
    if(&main != this)
        *this = main;
}
Form& Form::operator=(const Form& main)
{
    if(&main != this)
        this->sign = main.sign;
}
Form::~Form()
{

}

void Form::beSigned()
{

}
void Form::signForm()
{

}