#ifndef RPN_HPP
#define RPN_HPP
#include <iostream>
#include <stack>

class RPN
{
    private:
        std::stack<int> hold;
    public:
        void parce(std::string);

};

#endif