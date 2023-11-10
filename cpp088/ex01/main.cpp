#include "Span.hpp"

int main()
{
    Span sp = Span(10);
    std::vector<int>test;
    
    try
    {
        test.push_back(6);
        test.push_back(30);
        test.push_back(-1);
        test.push_back(-3);
        sp.addOne(test.begin(),test.end());
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

    }
    catch(const char * error)
    {
        std::cout << error <<std::endl;
    }
    return 0;
}