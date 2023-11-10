#include "Span.hpp"
Span::Span():size(0)
{

}

Span::Span(unsigned int number):size(number)
{

}

Span::Span(const Span& main):size(main.size)
{
    if(this != &main)
        *this = main;
}

Span& Span::operator=(const Span& main)
{
    if(this != &main)
    {
        this->size = main.size;
        hold.clear();
        hold = main.hold;
    }
    return *this;
}

Span::~Span()
{

}

void Span::addNumber(int number)
{
    if( static_cast< unsigned int> (hold.size()) < size)
        hold.push_back(number);
    else 
        throw "span is full";
}



int Span::longestSpan(){
    if(hold.size()  <= 1)
        throw "size less than 2";
    std::vector<int> tmp(hold);
    std::sort(tmp.begin(),tmp.end());
    return  *(tmp.begin() + hold.size() - 1) - *tmp.begin();
}

int Span::shortestSpan()
{
    int number = 0;
    std::vector<int> tmp(hold);
    std::vector<int>::iterator p;
    if(hold.size()  <= 1)
        throw "size less than 2";
    std::sort(tmp.begin(),tmp.end());
    for(int i  = 0; i < static_cast <int> (hold.size()) - 1 ;i++)
    {
        if(std::count(tmp.begin(),tmp.end(),tmp.at(i)) != 1)
            return 0;
        p = std::upper_bound(tmp.begin(),tmp.begin() + hold.size() - 1,tmp.at(i));
        if(abs(*p - tmp.at(i)) < number)
            number = abs(*p - tmp.at(i));
    }
    return (number);

}

