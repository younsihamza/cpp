#include "RPN.hpp"

int main(int argc , char **argv)
{
    try
    {
        if(argc != 2)
            throw "number of argument not valid !!"; 
        RPN rpn(argv[1]);

    }catch(const char*  str)
    {
        std::cout<<"ERROR: " <<str <<std::endl;
    }

}