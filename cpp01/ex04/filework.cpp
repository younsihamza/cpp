/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filework.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyounsi <hyounsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 11:13:58 by hyounsi           #+#    #+#             */
/*   Updated: 2023/08/15 15:01:38 by hyounsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filework.hpp"

std::string replaceString(std::string line, std::string s1, std::string s2)
{
    int size;
    std::string buffer;
    int number = 0;
    while(line.find(s1,number) != (size_t)-1)
    {
        size = line.find(s1,number);
        line = line.substr(0,size) + s2 + line.substr(size + s1.length(),line.length());
        number = size + s2.length();
    }
    return (line);
}

void fileWork(char **argv)
{
    std::ifstream  mainFile;
    std::string nameFile;
    std::ofstream replaceFile;
    std::string line;
    std::string tmp;
    
    nameFile = argv[1];
    mainFile.open(argv[1]);
    if(mainFile.is_open() == false)
    {
        std::cerr << "can't open file" <<std::endl;
        return ;
    }
    replaceFile.open(nameFile + ".replace",std::ios::trunc);
    if(replaceFile.is_open()==false)
    {
        std::cerr << "can't open file" <<std::endl;
        return ;
    }
    while(std::getline(mainFile,tmp))
    {
        line += tmp;
        if(mainFile.eof() != true)
            line +="\n";
    }
    line = replaceString(line,argv[2],argv[3]);
    replaceFile << line << std::endl;
    mainFile.close();
    replaceFile.close();
}