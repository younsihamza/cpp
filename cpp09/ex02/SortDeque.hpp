#ifndef SORTDEQUE_HPP
#define SORTDEQUE_HPP

#include <iostream>
#include <algorithm>
#include <deque>
#include <sstream>

class SortDeque
{
    private:
        
        std::deque<int> Deque;
        std::deque<int> befor;
    public:
        SortDeque();
        SortDeque(const SortDeque& main);
        SortDeque&  operator=(const SortDeque& main);
        ~SortDeque();

        void parseArgument(int len , char **argv);
        void DequeSort();
        void printValue();
        void generateJacobsthalNumbers( std::deque<int>&sp, size_t size);
        void sortPairt(std::deque<std::pair<int,int> >& pairNumbers);
        void insertToDeque(std::deque<int> &Deque , int trg);
        void merge(std::deque<std::pair<int,int> >& pairNumbers , std::deque<std::pair<int,int> >&a ,std::deque<std::pair<int,int> >&b);
        void MakePairsSortItSpliteIt(std::deque<int>& secondValue);
        size_t size();
        void CombineBetweenIndexsAndjacobsthalNumbers(std::deque<int>& combine, size_t size); //Make Combine Between Indexs And jacobsthal Numbers
};      

#endif