#include "PmergeMe.hpp"
#include "SortVector.hpp"
#include "SortDeque.hpp"
#include <sys/time.h>
#include <iomanip>

bool checkIsNumber(const std::string& str)
{
    if(str.size() == 0)
        throw "not valid argument !!";
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


void sortData(int len , char ** argv)
{
    try
    {
       { 
            SortVector vec;
            struct timeval begin_tp;
            struct timeval end_tp;
            gettimeofday(&begin_tp,NULL);
            double t;
            vec.parseArgument(len , argv);
            if(vec.size() > 1)
                vec.vectorSort();

            gettimeofday(&end_tp,NULL);
            t = (end_tp.tv_sec * 1000000 + end_tp.tv_usec) - (begin_tp.tv_sec * 1000000 + begin_tp.tv_usec) ;
            vec.printValue();
            std::cout <<std::fixed << std::setprecision(5) <<"Time to process a range of "<< vec.size() <<" elements with std::vector : " << (t) << " us"  << std::endl;
        }
        {
            SortDeque deq;
            struct timeval begin_tp;
            struct timeval end_tp;
            gettimeofday(&begin_tp,NULL);
            double t;
            deq.parseArgument(len , argv);
            if(deq.size() > 1)
                deq.DequeSort();
            gettimeofday(&end_tp,NULL);
            t = (end_tp.tv_sec * 1000000 + end_tp.tv_usec) - (begin_tp.tv_sec * 1000000 + begin_tp.tv_usec) ;
            std::cout <<std::fixed << std::setprecision(5) <<"Time to process a range of "<< deq.size() <<" elements with std::deque : " <<  (t) << " us" << std::endl;
        }
    }catch(const char* str)
    {
        std::cout << "ERORR : " << str << std::endl;
    }
}

