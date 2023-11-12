#include "BitcoinExchange.hpp"

void BitcoinExchange::fillMap()
{
    std::ifstream datafile;
    std::string line,s1,s2;
    int index;
    datafile.open("data.csv");
    std::getline(datafile,line);
    while(std::getline(datafile,line))
    {
        index = line.find(',');
        s1 = line.substr(0,index);
        s2 = line.substr(index+1);
        data[s1] = atof(s2.c_str()); 
    }
}
bool isleap(int year)
{
    return (year % 400 || (year % 4 && year != 100));
}

bool isvalidDate(int year,int month,int day)
{
    if(year < 2009 || year > 2023)
        return false;
    if(month < 1 || month > 12)
        return false;
    if(day < 1 || day > 31)
        return false;
    if(month == 2)
    {
        if(isleap(year))
        {
            if(day < 1 || day > 29)
                return false;
        }else
            if(day < 1 || day > 28)
                return false;
    }
    if(month == 4 || month == 6 || month == 9 || month == 11)
        if(day < 30)
            return false;
    return true;
}

bool check_date(std::string date)
{
    int year,month,day;
    std::string tmp = date;
    if(date == "date | value")
        return false;
    year = atoi(date.substr(0,date.find('-')).c_str());
    date = date.substr(date.find('-') + 1);
    month = atoi(date.substr(0,date.find('-')).c_str());
    date = date.substr(date.find('-') + 1);
    day = atoi(date.substr(0).c_str());
    if(!isvalidDate(year,month,day))
    {
        std::cout << "Error: date not valid  => "<< tmp <<std::endl;
        return false;
    }
    return true;
}

bool check_value_date(std::string line)
{
    int number = 0;
    int number_minus = 0;
    int space = 0;
    int i = 0;

    for(;line[i] ; i++)
    {
        if(isdigit(line[i]) && space != 1)
            number = 1;
        else if(line[i] == '-' && number == 1 && number_minus < 2 && space != 1 && isdigit(line[i+1]))
        {
            number_minus++;
            number = 0;
        }else  if(line[i] == ' ' && number_minus == 2 && number == 1)
        {
            space = 1;
            number = 0;
        }
        else
           return false;
    }
    if(space == 0)
        return false;
    return true;
}

bool check_value_price(std::string line)
{
    int i = 0;
    int number = 0;
    int point = 0;
    for(;line[i] == ' ' ;i++);
    if(line[i] == '-')
        i++;
    for(;line[i] ;i++)
    {
        if(isdigit(line[i]))
            number = 1;
        else if(line[i] == '.' && point == 0 && isdigit(line[i+1]))
            point = 1;
        else 
            return false;
    }
    return true;
}

bool check_value_valid(std::string line)
{
    std::string word = ".| -";

    for(int i = 0; line[i];i++)
    {
        if(!isdigit(line[i]) && word.find(line[i]) == -1)
            return false;
    }
    return true;
}

bool check_value(std::string line)
{
    int index = line.find('|');
    if( index == -1)
        return false;
     if(!check_value_valid(line)||!check_value_date(line.substr(0,index))|| !check_value_price(line.substr(index + 1)))
        return false;
    return true;
}
void BitcoinExchange::parseData_print(std::string filename)
{
    std::ifstream infile;
    std::string line;
    std::string date;
    float number;
    infile.open(filename);
    if(infile.is_open()==false)
    {
        std::cout << "ERROR: no file found " << std::endl;
        return;
    }
    std::getline(infile,line);
    while(std::getline(infile,line))
    {
        if(!check_value(line))
            std::cout << "ERROR :bad input => "<< line <<std::endl;
        else 
        {
            date = line.substr(0,line.find('|'));
            if(check_date(date) )
            {
                number =  atof(line.substr(line.find('|') + 1).c_str());
                if(number < 0)
                    std::cout << "Error: not a positive number." <<std::endl;
                else if(number > 1000)
                    std::cout << "Error: too large a number."<<std::endl;
                else
                    std::cout << date.substr(0,date.find(' ')) << " => "<< number << " = "<< data.lower_bound(date.substr(0,date.find(' ')))->second * number <<std::endl;
            }
        }
    }
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &main)
{
    if(this  != &main)
        *this = main;
}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange &main)
{
    if(this  != &main)
        this->data = main.data;
}

BitcoinExchange::~BitcoinExchange()
{}

BitcoinExchange::BitcoinExchange()
{}

