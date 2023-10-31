#include "RPN.hpp"

int main(int argc ,char **argv)
{
    RPN hamza;
    try
    {
        hamza.parce(argv[1]);
    }catch(char* error)
    {
        std::cout << error <<std::endl;
    }
}