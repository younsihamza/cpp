
#include "ScalarConverter.hpp"

bool parce_data(std::string& data)
{
    return true;
}

void intConvert(std::string data)
{
    if(static_cast<long>(std::atof(data.c_str())) > INT_MAX ||static_cast<long>(std::atof(data.c_str())) < INT_MIN)
         std::cout << "int : " << "impossible"<<std::endl;
    else
        std::cout << "int : " << static_cast<int> (std::atof(data.c_str()))<<std::endl;
}

void CharConvert(std::string& data)
{
    if(static_cast<int> (std::atof(data.c_str()))  < -128 || static_cast<int> (std::atof(data.c_str())) > 127)
        std::cout << "char : "<< "impossible" <<std::endl;
    else if(static_cast<int> (std::atof(data.c_str()))  < 32 || static_cast<int> (std::atof(data.c_str())) > 127)
        std::cout << "char : "<< "Non displayable" <<std::endl;
    else
        std::cout << "char : "<< static_cast<char> (std::atof(data.c_str()))<<std::endl;
} 

void floatDoubleConvert(std::string& data)
{
    if((std::atof(data.c_str()) - static_cast<int>(std::atof(data.c_str()))) == 0)
    {
        std::cout << "float : " <<  static_cast<float>(std::atof(data.c_str())) <<".0f"<<std::endl;
        std::cout << "double : "<<  (std::atof(data.c_str()))<<".0"<<std::endl;
    }
    else
    {
        std::cout << "float : " << static_cast<float> (std::atof(data.c_str())) <<"f"<<std::endl;
        std::cout << "double : "<<  (std::atof(data.c_str()))<<std::endl;
    }
}

void ScalarConverter::convert(std::string data)
{
    CharConvert(data);
    intConvert(data);
    floatDoubleConvert(data);
}