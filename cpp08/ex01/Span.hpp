#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>


class Span
{
    private:
        unsigned int len;
        std::vector<int> *numbers;
        unsigned int cournet_size;
    public:
        Span();
        Span(std::vector<int>::iterator begin,std::vector<int>::iterator end);
        Span(unsigned int len);
        Span(const Span& main);
        Span& operator=(const Span& main);
        ~Span();

        void addNumber(int number);
        void fillSpan();
        int shortestSpan();
        int longestSpan();
};

#endif