#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <algorithm>

class Span
{
    private:
        unsigned int size;
        int current_position;
        std::vector<int> hold;
    public:
        Span();
        Span(unsigned int number);
        Span(const Span& main);
        Span& operator=(const Span& main);
        ~Span();

        void addNumber(int number);
        int longestSpan();
        int  shortestSpan();
        
        template<typename T >void addOne(T begin,T end){
           std::copy(begin , end,std::back_inserter(hold));
}
};

#endif