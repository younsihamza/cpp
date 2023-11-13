#include <vector>
#include <iostream>
void insertionSort(std::vector<int> &table)
{
    int i = 1;
    int hold;
    int j;
    while(i < table.size())
    {
        hold = table.at(i);
        j  = i - 1;
        while(j >= 0 && table.at(j) > hold)
        {
            table.at(j +1) = table.at(j);
            j--;
        }
        table.at(j+1) = hold;
        i++;
    }
}

int main()
{
    int i = 0;
    std::vector<int> table;
    table.push_back(21);
    table.push_back(1);
    table.push_back(2);
    table.push_back(-1);
    table.push_back(71);
    insertionSort(table);
    while(i < 5)
    {
        std::cout << "\n"<<"result : "  <<table.at(i) <<std::endl;
        i++;
    }
}