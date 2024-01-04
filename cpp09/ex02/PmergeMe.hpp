#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <sstream>

class PmergeMe
{
    private:
        std::deque<int> deque;
        std::vector<int> vector;
    public:
        PmergeMe();
        void parseArgument(int len , char **argv);


};

#endif