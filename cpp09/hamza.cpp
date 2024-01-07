#include <iostream>
#include <vector>
int   jacobsthalNumbers(size_t numbers )
{
    if(numbers <= 1)
        return (numbers);
    return jacobsthalNumbers(numbers - 1) + (2 * jacobsthalNumbers(numbers - 2));
}


int  main()
{
    std::vector<int> mainchain;
    mainchain.push_back(8);
    mainchain.push_back(10);
    mainchain.push_back(18);
    mainchain.push_back(28);
    mainchain.push_back(30);

    std::vector<int> hamza;
    std::vector<int> jsn;
    std::vector<int> indexs;
    std::vector<int> combine;
    hamza.push_back(9);
    hamza.push_back(5);
    hamza.push_back(6);
    hamza.push_back(7);
    hamza.push_back(-1);
    hamza.push_back(-1);
    hamza.push_back(-1);
    hamza.push_back(-1);
    hamza.push_back(-1);
    hamza.push_back(-1);
    hamza.push_back(-1);
    hamza.push_back(-1);
    hamza.push_back(-1);
    hamza.push_back(-1);
    hamza.push_back(-1);
    hamza.push_back(-1);
    hamza.push_back(-1);
    hamza.push_back(-1);
    hamza.push_back(-1);
    for(size_t i = 0 ; i < hamza.size() ; i++)
    {
        int hold = jacobsthalNumbers(i);
        if(hold >= hamza.size())
            break;
        jsn.push_back(hold);
    }

    for(size_t i = 0 ; i < hamza.size(); i++)
        indexs.push_back(i);
    
    size_t j = 0;
    for(size_t i = 0; i < jsn.size() ; i++)
    {
        int number = jsn.at(i);
        if(combine.size() != 0 && combine.back() == number)
            continue;
        indexs[number] = -1;
        combine.push_back(number);
        for(;j < indexs.size() && indexs.at(j) < number  ; j++)
        {
            if(indexs.at(j) == -1)
                continue;
            combine.push_back(indexs.at(j));
        }
    }
    if(j < indexs.size())
        combine.insert(combine.end(),indexs.begin() + j ,indexs.end());
    
    for(int i = 0; i < combine.size() ; i++)
        std::cout << combine.at(i) << std::endl;
    
    
    return 0;
}
