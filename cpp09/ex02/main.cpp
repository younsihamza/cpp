#include "PmergeMe.hpp"
#include "SortVector.hpp"

int main(int argc , char **argv)
{
    if(argc == 1)
        return (std::cout << "ERROR: no argument enter !" << std::endl, 0);
    sortData(argc,argv);
}