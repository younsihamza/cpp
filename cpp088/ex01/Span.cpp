#include "Span.hpp"
Span::Span():size(0),current_position(0)
{

}

Span::Span(unsigned int number):size(number),current_position(0)
{

}

Span::Span(const Span& main):size(main.size),current_position(0)
{
    if(this != &main)
        *this = main;
}

Span& Span::operator=(const Span& main)
{
    if(this != &main)
    {
        this->size = main.size;
        current_position = main.current_position;
        hold = main.hold;
    }
    return *this;
}

Span::~Span()
{

}

void Span::addNumber(int number)
{
    if(current_position < size)
    {
        hold.push_back(number);
        current_position++;
    }else 
        throw "span is full";
}



int Span::longestSpan(){
    if(current_position  <= 1)
        throw "faild";
    std::vector<int> tmp(hold);
    std::sort(tmp.begin(),tmp.end());
    return  *(tmp.begin() + current_position -1)-*tmp.begin();
}

int Span::shortestSpan()
{
    if(current_position  <= 1)
        throw "faild";
    int number = longestSpan();
    std::vector<int> tmp(hold);
    std::vector<int>::iterator p;
    std::sort(tmp.begin(),tmp.end());
    for(int i  = 0; i < current_position - 1 ;i++)
    {
        p = std::upper_bound(tmp.begin(),tmp.begin() + current_position -1,tmp.at(i));
        if((*p - tmp.at(i)) < number)
            number = (*p - tmp.at(i));
    }
    return number;

}

