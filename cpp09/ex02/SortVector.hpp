#ifndef SORTVECTOR_HPP
#define SORTVECTOR_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>

class SortVector
{
    private:
        
        std::vector<int> vector;
        std::vector<int> befor;
    public:
        SortVector();
        SortVector(const SortVector& main);
        SortVector&  operator=(const SortVector& main);
        ~SortVector();

        void parseArgument(int len , char **argv);
        void vectorSort();
        void printValue();
        void generateJacobsthalNumbers( std::vector<int>&sp, size_t size);
        void sortPairt(std::vector<std::pair<int,int> >& pairNumbers);
        void insertToVector(std::vector<int> &vector , int trg);
        void merge(std::vector<std::pair<int,int> >& pairNumbers , std::vector<std::pair<int,int> >&a ,std::vector<std::pair<int,int> >&b);
        void MakePairsSortItSpliteIt(std::vector<int>& secondValue);
        size_t size();
        void CombineBetweenIndexsAndjacobsthalNumbers(std::vector<int>& combine, size_t size); //Make Combine Between Indexs And jacobsthal Numbers
};      

#endif