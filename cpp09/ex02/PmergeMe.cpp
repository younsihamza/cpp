#include "PmergeMe.hpp"
#include "SortVector.hpp"
#include "SortDeque.hpp"
#include <iomanip>

bool checkIsNumber(const std::string& str)
{
    for(size_t i = 0; i < str.size(); i++)
        if(!isdigit(str.at(i)))
            return false;
    return true;
}

int   jacobsthalNumbers(size_t numbers )
{
    if(numbers <= 1)
        return (numbers);
    return jacobsthalNumbers(numbers - 1) + (2 * jacobsthalNumbers(numbers - 2));
}


void sortVectorData(int len , char ** argv)
{
    try
    {
       { 
            SortVector vec;
            std::clock_t times = std::clock();
            double t;
            vec.parseArgument(len , argv);
            if(vec.size() > 1)
                vec.vectorSort();
            t = static_cast<double>(std::clock() - times) /  static_cast<double>(CLOCKS_PER_SEC);
            vec.printValue();
            std::cout <<std::fixed << std::setprecision(5) <<"Time to process a range of "<< vec.size() <<" elements with std::vector : " << (t)  << std::endl;
        }
        {
            SortDeque deq;
            std::clock_t times = std::clock();
            double t;
            deq.parseArgument(len , argv);
            if(deq.size() > 1)
                deq.DequeSort();
            t = static_cast<double>(std::clock() - times) / static_cast<double>(CLOCKS_PER_SEC);
            std::cout <<std::fixed << std::setprecision(5) <<"Time to process a range of "<< deq.size() <<" elements with std::deque : " <<  (t)  << std::endl;
        }
    }catch(const char* str)
    {
        std::cout << "ERORR : " << str << std::endl;
    }
}

