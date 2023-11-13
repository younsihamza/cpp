#include <iostream>
#include <vector>

void merge(std::vector<int> &table ,std::vector<int> &left, std::vector<int> &right)
{
    int i = 0;
    int i_left = 0;
    int i_right = 0;
    int j = 0 ;

    while(i_left  < left.size() &&  i_right < right.size())
    {
        if(left.at(i_left) < right.at(i_right))
            table.at(i) = left.at(i_left++);
        else
            table.at(i) = right.at(i_right++);
        i++;
    }

    while(i_left < left.size())
        table.at(i++) = left.at(i_left++);

    while(i_right < right.size())
        table.at(i++) = right.at(i_right++);

}

void mergeSort(std::vector<int> &table)
{
    std::vector<int> left;
    std::vector<int> right;
    int half = 0;
    int i = 0;
    if(table.size() == 1)
        return;
    half = table.size() / 2;
    left.insert(left.begin(),table.begin(),table.begin() + half );
    right.insert(right.begin(),table.begin() + half ,table.end());
    mergeSort(left);
    mergeSort(right);
    merge(table,left,right);
}

int main()
{
    int i = 0;
    std::vector<int> table;
    table.push_back(21);
    table.push_back(1);
    table.push_back(3);
    table.push_back(7);
    table.push_back(71);
    mergeSort(table);
    while(i < 5)
    {
        std::cout << "\n"<<"result : "  <<table.at(i) <<std::endl;
        i++;
    }

}
