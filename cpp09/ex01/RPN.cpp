#include "RPN.hpp"
void check_ch(std::string text)
{
    std::string word = "+-/ *";
    int i = 0;
    while(text[i])
    {
        if(std::isdigit(text.at(i)) == true)
            i++;
        else if(word.find(text.at(i)) != -1)
            i++;
        else
            throw "error charactare ";
    }
}

void calcule(std::string text)
{
    int i = 0;
    std::string tmp;
    std::stack<int> hold;
    int n1;
    int n2;
    while(text[i])
    {
        n1 = n2 = 0;
        if(text[i] == ' ')
            i++;
        else if(std::isdigit(text[i])== true)
        {
            while(std::isdigit(text[i])== true )
            {
                tmp = tmp + text.at(i);
                i++;
            }
            
            if(tmp.length() != 1 )
                throw "big than 10";
            else
                hold.push(atoi(tmp.c_str()));
            tmp.clear();
        }
        else 
        {
            if(hold.size() <= 1)
                throw "error operation";
            n1 = hold.top();
            hold.pop();
            n2 = hold.top();
            hold.pop();
            if(text[i] == '+')
                hold.push(n2 + n1);
            else if(text[i] == '-')
                hold.push(n2 - n1);
            else if(text[i] == '/')
                hold.push(n2 / n1);
            else if(text[i] == '*')
                hold.push(n2 * n1);
            i++;
        }
    }
    if(hold.size() > 1 ||hold.empty())
        throw "error exprition ";
    else 
        std::cout << hold.top() <<std::endl;
}
void RPN::parce(std::string text)
{
    try
    {
        check_ch(text);
        calcule(text);
    }catch(const char* error)
    {
        std::cout << error <<std::endl;
    }
    
};