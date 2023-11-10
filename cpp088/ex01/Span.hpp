#ifndef SPAN_HPP
#define SPAN_HPP
#include <iostream>
#include <algorithm>
#include <vector>

class Span
{
    private:
        unsigned int size;
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
        
        template<typename T >void addOne(T begin,T end)
        {
            for(T i = begin; i != end;i++)
                addNumber(*i);
            // std::copy(begin , end,std::back_inserter(hold));
            // std::cout << hold.size() << "   " << size <<std::endl;
            // if(static_cast<unsigned int>(hold.size()) >= size)
            //     throw "out of rang";
            // else
            //     current_position = static_cast<int>(hold.size());
        }
};

#endif