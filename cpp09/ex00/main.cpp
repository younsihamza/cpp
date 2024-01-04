#include "BitcoinExchange.hpp"
#include <iostream>

int main(int argc, char **argv)
{
    try
    {   
        if(argc != 2)
            throw "wrong number of arguments";
        BitcoinExchange bitcoinExchange(argv[1]);
       
    }
    catch(const char* e)
    {
        std::cout << e << '\n';
    }
    return 0;
}