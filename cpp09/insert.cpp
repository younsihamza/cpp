#include <vector>
#include <iostream>

void insertNumber(std::vector<int>& Numbers)
{
    int currentValue;
    size_t size = Numbers.size();
    int holdNumber;
    for(size_t i  = 0 ; i < size ; i++)
    {
        holdNumber = Numbers.at(i);
        for(int j = i - 1 ; j >= 0; j-- )
        {
            if(Numbers.at(j) <= holdNumber)
            {
                Numbers.at(j + 1) = holdNumber;
                break;
            }
            else
            {
                Numbers.at(j + 1) = Numbers.at(j);
                if(j == 0)
                    Numbers.at(j) = holdNumber;
            }
        }
        
    }
}


int main()
{
    std::vector<int > hold;
    hold.push_back(2);
    hold.push_back(84);
    hold.push_back(4);
    hold.push_back(9);
    hold.push_back(-1);
    hold.push_back(8);
    hold.push_back(8);
    hold.push_back(8);
    hold.push_back(10);
    insertNumber(hold);
    for(size_t i = 0 ; i < hold.size();i++)
        std::cout << hold.at(i) << std::endl;
}