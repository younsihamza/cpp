#include "Span.hpp"

int main()
{
    Span sp = Span(6);
    std::vector<int>test(5);
    test.push_back(20);
    test.push_back(6);
    test.push_back(30);
    test.push_back(10);
    test.push_back(2);
    sp.addOne(test.begin(),test.end());
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
    return 0;
}