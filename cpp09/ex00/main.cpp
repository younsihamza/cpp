#include "BitcoinExchange.hpp"

int main(int argc,char **argv)
{
    if(argc != 2)
    {
        std::cout << "you must enter one argument !!" << std::endl;
        return 0;
    }
    BitcoinExchange hamza;
    hamza.fillMap();
    hamza.parseData_print(argv[1]);
    
}