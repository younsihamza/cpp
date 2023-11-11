#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <iostream>
#include <map>
#include <fstream>

class BitcoinExchange
{
    private:
        std::map<std::string,float,std::greater<std::string> > data; 
    public:
        void fillMap();
        void parseData_print(std::string filename);

        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &main);
        ~BitcoinExchange();
        BitcoinExchange & operator=(const BitcoinExchange &main);

};

#endif