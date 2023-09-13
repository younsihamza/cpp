#include "Span.hpp"

int main()
{
    Span sp = Span(1000000);
    std::vector<int> a = {1, 2, 3, 4, 5};

    // Define iterators for the beginning and end of the array

    Span l(a.begin(),a.end());
    
    // std::cout << l.shortestSpan() << std::endl;
    // std::cout << l.longestSpan() << std::endl;
    return 0;
}