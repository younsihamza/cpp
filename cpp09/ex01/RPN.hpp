#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <algorithm>
#include <sstream>

class RPN
{
    private:
        std::stack<double> stack;
        std::string expression;
        RPN();
        RPN(const RPN& main);
        RPN& operator=(const RPN& main);

    public:
        RPN(const std::string& expression);
        bool checkIsValidExpression();
        void calculate();
        ~RPN();
};

#endif
