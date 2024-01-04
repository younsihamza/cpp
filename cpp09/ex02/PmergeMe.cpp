#include "PmergeMe.hpp"

bool checkIsNumber(const std::string& str)
{
    for(size_t i = 0; i < str.size(); i++)
        if(!isdigit(str.at(i)))
            return false;
    return true;
}

PmergeMe::PmergeMe()
{
    
}


void PmergeMe::parseArgument(int len , char **argv)
{
    std::stringstream ss;
    
    double number;
    for(int i = 1 ; i < len ; i++)
        if(checkIsNumber(argv[i])== false)
            throw "argumet not valide";
    for(int i = 1; i < len ; i++)
    {
        ss << argv[i];
        ss >> number;
        if( number > std::numeric_limits<unsigned int>::max())
            throw "number too large!!";
        deque.push_back(number);
        vector.push_back(number);
    }
    for(size_t i = 0 ; i < deque.size();i++)
    {
        std::cout << deque.at(i) << std::endl;
        std::cout << vector.at(i) << std::endl;
    }
}

