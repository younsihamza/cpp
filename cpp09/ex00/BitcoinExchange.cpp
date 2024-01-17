#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange(const std::string& filenameIn):filenameIn(filenameIn)
{
    PaesefileData();
    ParseInFile();
}

bool checkIsNumber( std::string& str)
{
   
    int number = std::count(str.begin(), str.end(), '.');
    if(str.find('-') != std::string::npos && (*str.begin() != '-' || str.size() == 1))
        return false;
    if(number > 1 || *str.begin() == '.' || *str.rbegin() == '.')
        return false;
    std::string character = ".-";
    for(size_t i = 0 ; i < str.size();i++)
        if(std::isdigit(str.at(i)) == false && character.find(str.at(i)) == std::string::npos)
            return false;
    return true;
}
bool checkString(const std::string& str)
{
    int mines = std::count(str.begin(), str.end(), '-');
    int space = std::count(str.begin(), str.end(), ' ');
    int pipe = std::count(str.begin(), str.end(), '|');
    int number = std::count(str.begin(), str.end(), '.');

    std::string character = "|- . ";


    if((mines != 2 && mines != 3 )|| space != 2 || pipe != 1 || number > 1)
        return false;
    for(size_t i = 0 ; i < str.size();i++)
    {
        if(std::isdigit(str.at(i)) == false && character.find(str.at(i)) == std::string::npos)
            return false;
    }
    return true;
}

void BitcoinExchange::PaesefileData()
{
    std::string tmp;
    std::string hold;
    
    std::fstream file("data.csv");
    if(!file.is_open())
        throw "data file not open !!";
    std::getline(file ,tmp);
    if(tmp != "date,exchange_rate")
        throw (file.close(), "first line do not have date,exchange_rate");
    while(getline(file , tmp))
    {
        hold = tmp;
        if(tmp.size() == 0)
            throw (file.close(), "empty line in file data!!");
        if(tmp.size() < 11 )
            throw (file.close(), "date format is not correct");
        std::string h = tmp.substr(0,10) ;
        if(checkDate(h) == false)
            throw (file.close(), "date format is not correct");
        tmp = tmp.substr(11);
        if(checkIsNumber(tmp) == false)
            throw (file.close(), "exchange_rate format is not correct");
        double exchange_rate;
        std::stringstream ss(tmp);
        ss >> exchange_rate;
        if(exchange_rate < 0)
            throw (file.close(), "exchange_rate format is not correct");
        Datafile[hold.substr(0,10)] = exchange_rate;
    }
    if(Datafile.size() == 0)
        throw (file.close(), "data file is empty!!");
    file.close();
}

bool isLeapYear(int year)
{
    return((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

bool BitcoinExchange::checkDate( std::string& dataString)
{
    size_t date[3];
    dataString = dataString.substr(0,dataString.find(' '));
    char delimater;
    if(dataString.size() != 10)
        return false;
    for(size_t i  = 0 ; i < dataString.size();i++)
        if(std::isdigit(dataString.at(i))== false && dataString.at(i) != '-')
            return false;
    std::stringstream ss;
    // std::cout << dataString << std::endl;
    ss << dataString;
    ss >> date[0] >> delimater >> date[1] >> delimater >> date[2];
    if(date[0] < 2009 || date[0] > 9999 || date[1] < 1 || date[1] > 12 || date[2] < 1 || date[2] > 31)
        return false;
    if(date[1] == 2)
    {
        if(isLeapYear(date[0]))
            return (date[2] <= 29);
        else
            return (date[2] <= 28);
    }
    if(date[1] == 4 || date[1] == 6 || date[1] == 9 || date[1] == 11)
        return (date[2] <= 30);
    return true;
}

void BitcoinExchange::ParseInFile()
{
    std::map<std::string, float ,std::greater<std::string> > tmpMap;
    for(std::map<std::string, float>::iterator it = Datafile.begin(); it != Datafile.end();it++)
        tmpMap[it->first] = it->second;
     std::fstream file;
     std::string tmp;
     file.open(filenameIn.c_str());
    if(!file.is_open())
        throw "in file not open !!";
    std::getline(file ,tmp);
    if(tmp != "date | value")
        throw (file.close(), "first line do not have date | value");
    while(getline(file , tmp))
    {
        if(tmp.size() == 0)
        {
            std::cout << " =>empty line!!" << std::endl;
            continue;
        }
        if(tmp.size() < 14 || checkString(tmp) == false || tmp.find(" | ") == std::string::npos)
        {
            std::cout <<"ERROR: bad input!!=>" << tmp << std::endl;
            continue;
        }

        std::string date = tmp.substr(0,tmp.find(" | "));
        // std::cout << date << std::endl;
        if(checkDate(date) == false)
        {
            std::cout <<"ERROR: bad input!!=>" << tmp << std::endl;
            continue;
        }
        std::string value = tmp.substr(tmp.find(" | ")+3);
        if(checkIsNumber(value) == false)
        {
            std::cout <<"ERROR: bad input!!=>" << tmp << std::endl;
            continue;
        }
        double valueDouble;
        std::stringstream ss(value);
        ss >> valueDouble;
        if(valueDouble < 0 )
        {
            std::cout <<"Error: not a positive number."  << std::endl;
            continue;
        }
        if(valueDouble > 1000)
        {
            std::cout <<"Error: too large a number." << std::endl;
            continue;
        }
        std::map<std::string, float>::iterator it;
        std::map<std::string, float ,std::greater<std::string> >::iterator it2;
        std::stringstream st;
        int Tdate[3];
        std::string delimater;
        st << date;
        st >> Tdate[0] >> delimater >> Tdate[1] >> delimater >> Tdate[2];
        long holdNumber = Tdate[0] * 10000 + Tdate[1] * 100 + Tdate[2];
        long number1;
        long number2;
        it = Datafile.lower_bound(date);
        it2 = tmpMap.lower_bound(date);
        if(it == Datafile.end())
            it--;
        if(it2 == tmpMap.end())
            it2--;
        st << it->first;
        st >> Tdate[0] >> delimater >> Tdate[1] >> delimater >> Tdate[2];
        long holdNumber2 = Tdate[0] * 10000 + Tdate[1] * 100 + Tdate[2];
        st.clear();
        st << it2->first;
        st >> Tdate[0] >> delimater >> Tdate[1] >> delimater >> Tdate[2];
        long holdNumber3 = Tdate[0] * 10000 + Tdate[1] * 100 + Tdate[2];
        number1 = abs(holdNumber - holdNumber3);
        number2 = abs(holdNumber - holdNumber2);
        if(number1 <= number2)
            std::cout  << date << " => "<< valueDouble << " = " << it2->second * valueDouble << std::endl;
        else
             std::cout  << date << " => "<< valueDouble << " = " << it->second * valueDouble << std::endl;
    }
    file.close();
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy)
{
    *this = copy;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& op)
{
    if(this == &op)
        return *this;
    this->Datafile = op.Datafile;
    this->filenameIn = op.filenameIn;
    return *this;
}

BitcoinExchange::~BitcoinExchange()
{
    
}

BitcoinExchange::BitcoinExchange()
{
    
}