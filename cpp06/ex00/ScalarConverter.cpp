/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 16:08:36 by hyounsi           #+#    #+#             */
/*   Updated: 2023/09/04 16:08:36 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScalarConverter.hpp"

bool parce_data(const std::string& data)
{
    size_t i = 0;
    int isfloat = 0;
    int fraction = 0;
    if(data[i] == '+' || data[i] == '-')
        i++;
    if(data.substr(i) == "inf" ||data.substr(i) == "nan")
        return true;
    if(data.length() == i || std::isdigit(data.at(i)) == 0)
        return false;
    while(i < data.length())
    {
        if(data.at(i) == 'f' && isfloat == 0 )
            isfloat++;
        else if(fraction == 0 && data.at(i) == '.')
            fraction++;
        else if(std::isdigit(data.at(i)) == 0 || isfloat == 1 )
            return false;
        if(data.at(i) == '.' && (i+1 == data.length() || std::isdigit(data.at(i+1)) == 0 ))
            return false;
        i++;
    }
    return true;
}

void intConvert(std::string data)
{
    if(static_cast<long>(std::atof(data.c_str())) > INT_MAX || static_cast<long>(std::atof(data.c_str())) < INT_MIN)
         std::cout << "int : " << "impossible"<<std::endl;
    else
        std::cout << "int : " << static_cast<int> (std::atof(data.c_str()))<<std::endl;
}

void CharConvert(std::string& data)
{
    if(static_cast<int> (std::atof(data.c_str()))  < -128 || static_cast<int> (std::atof(data.c_str())) > 127)
        std::cout << "char : "<< "impossible" <<std::endl;
    else if(static_cast<int> (std::atof(data.c_str()))  < 32 || static_cast<int> (std::atof(data.c_str())) >= 127)
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
        if(static_cast<float> (std::atof(data.c_str())) > std::numeric_limits<float>::max() ||static_cast<float> (std::atof(data.c_str())) < std::numeric_limits<float>::min() )
            std::cout << "float : " << static_cast<float> (std::atof(data.c_str())) <<std::endl;
        else
            std::cout << "float : " << static_cast<float> (std::atof(data.c_str()))<< "f" <<std::endl;
        std::cout << "double : "<<  (std::atof(data.c_str()))<<std::endl;
    }
}

void ScalarConverter::convert(std::string data)
{
    if(parce_data(data) == false)
    {
        std::cout << "not valued number" <<std::endl;
        return ;
    }
    CharConvert(data);
    intConvert(data);
    floatDoubleConvert(data);
}

ScalarConverter::ScalarConverter(){}
ScalarConverter::ScalarConverter(const ScalarConverter& main){
    if(&main != this)
        *this = main;
}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter& main){
     if(&main != this)
        {

        }
        return *this;
}
ScalarConverter::~ScalarConverter(){}