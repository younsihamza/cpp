#include <vector>
#include <iostream>

void insertTo(std::vector<int> &mainHolder,std::vector<int>& dataToInsert)
{
    int low = 0;
    int high;
    int mid;
    while(dataToInsert.size() != 0)
    {
        low = 0;
        high = mainHolder.size() - 1;
        while(low <= high)
        {
            mid = (low + high) / 2;
            if(mainHolder[mid] < dataToInsert.at(0))
                low = mid + 1;
            else
                high = mid - 1;
        }
        mainHolder.insert(mainHolder.begin() +low , dataToInsert.at(0));
        dataToInsert.erase(dataToInsert.begin());
    }
}

int main()
{
    std::vector<int> mainHolder;
    std::vector<int> dataToInsert;
    mainHolder.push_back(1);
    mainHolder.push_back(2);
    mainHolder.push_back(3);
    mainHolder.push_back(7);
    mainHolder.push_back(9);
    mainHolder.push_back(20);
    mainHolder.push_back(30);

    dataToInsert.push_back(3);
    dataToInsert.push_back(13);
    dataToInsert.push_back(33);
    dataToInsert.push_back(13);
    dataToInsert.push_back(6);
    insertTo(mainHolder,dataToInsert);
    for(size_t i = 0; i < mainHolder.size() ; i++)
        std::cout << mainHolder.at(i) << std::endl;
}