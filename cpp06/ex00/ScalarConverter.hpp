#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>

class ScalarConverter
{
    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& main);
        ScalarConverter& operator=(const ScalarConverter& main);
        ~ScalarConverter();
    public:
        static void convert( std::string data);
};

#endif