#ifndef BITCOINEXCHAANGE_HPP
#define BITCOINEXCHAANGE_HPP
#include <map>
#include <fstream>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <list>
#include <utility>

class BitcoinExchange
{
    private:
        std::map <std::string, float> Datafile;
        std::string filenameIn;
        BitcoinExchange();
    public:
        BitcoinExchange(const std::string& filenameIn);
        void PaesefileData();
        void ParseInFile();
        bool checkDate(const std::string& dataString);
        BitcoinExchange(const BitcoinExchange& copy);
        BitcoinExchange& operator=(const BitcoinExchange& op);
        ~BitcoinExchange();
};
#endif