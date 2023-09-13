#include "Span.hpp"

Span::Span():len(1),numbers(new std::vector<int>[1]),cournet_size(0)
{
    
}

Span::Span(unsigned int len):len(len),numbers(new std::vector<int>[len]),cournet_size(0)
{

}

Span::Span(const Span& main)
{
    if(&main != this)
        *this = main;
}

Span& Span::operator=(const Span& main)
{
    if(&main != this)
    {
        this->len = main.len;
        this->cournet_size = main.cournet_size;
        delete [] this->numbers;
        this->numbers = new std::vector<int>[this->len];
        for(int i = 0 ; i < this->cournet_size ; i++)
            this->numbers->push_back(main.numbers->at(i));
    }
    return (*this);
}
Span::Span(std::vector<int>::iterator begin,std::vector<int>::iterator end):numbers(new std::vector<int>(begin,end))
{

}
Span::~Span()
{
    delete[] numbers;
}

void Span::addNumber(int number)
{
    if(cournet_size < len)
    {
        numbers->push_back(number);
        cournet_size++;
    }else
        throw std::out_of_range("adding number out of range");
}
int Span::shortestSpan()
{
    if(len <= 1)
        return 0;
    int tmp = longestSpan();
    std::vector<int>::iterator p;
    for(int i  = 0; i < cournet_size - 1 ;i++)
    {
        p = std::upper_bound(numbers->begin(),numbers->begin() + cournet_size -1,numbers->at(i));
        if((*p - numbers->at(i)) < tmp)
            tmp = (*p - numbers->at(i));
    }
    return tmp;


}
int Span::longestSpan()
{
    if(len <= 1)
        return (0);
    std::sort(numbers->begin(),numbers->begin() + cournet_size);
    return (numbers->at(cournet_size - 1) - numbers->at(0));  
}
