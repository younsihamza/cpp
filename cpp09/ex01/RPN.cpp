#include "RPN.hpp"

RPN::RPN(const std::string& expression):expression(expression)
{
    checkIsValidExpression();
    calculate();
}


bool RPN::checkIsValidExpression()
{
    std::string validChar = "0123456789+-*/ ";
    for(size_t i = 0 ; i < expression.size();i++)
        if(validChar.find(expression.at(i)) == std::string::npos)
            return false;
    return true;
}
double checkOp(const std::string& op, double number1 , double number2)
{
    double result = 0;
    if(op[0] == '+')
        result = number1 + number2;
    else if(op[0] == '-')
        result = number1 - number2;
    else if(op[0] == '*')
        result = number1 * number2;
    else if(op[0] == '/')
        result = number1 / number2;
    return result;
}

void RPN::calculate()
{
    std::stringstream ss(expression);
    std::string tmp;
    int number;
    double numberTable[2];

    
    while(getline(ss, tmp, ' '))
    {
        if(tmp.size() != 1)
           throw "invalid expression";
        if(std::isdigit(tmp[0]))
        {
            number = std::atoi(tmp.c_str());
            stack.push(number);
        }else
        {
            if(stack.size() < 2)
                throw "invalid operation";
            numberTable[1] =  stack.top();
            stack.pop();
            numberTable[0] = stack.top();
            stack.pop();
            stack.push(checkOp( tmp ,numberTable[0],numberTable[1]));
        }
    }
   
    if(stack.size() != 1)
        throw "invalid operation";
    std::cout << stack.top() << std::endl;
}

RPN::~RPN()
{

}

RPN::RPN()
{

}

RPN::RPN(const RPN& main)
{
    *this = main;
}

RPN& RPN::operator=(const RPN& main)
{
    if(this != & main)
    {
        stack = main.stack;
        expression = main.expression;
    }
    return *this;
}