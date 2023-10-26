#include "easyfind.hpp"

int main()
{
    std::vector<int> table;
    try
    {
        table.push_back(10);
        table.push_back(6);
        table.push_back(11);
        easyfind(table,60);
    }catch(const char * text)
    {
        std::cout << text << std::endl;
    }
}