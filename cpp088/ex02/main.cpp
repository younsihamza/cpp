#include "MutantStack.hpp"
#include <list>
int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;

    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }


    std::cout <<"-------------------"<<std::endl;

     std::list<int> myList;
    myList.push_back(5);
    myList.push_back(17);
    std::cout << myList.back() << std::endl;
    myList.pop_back();
    std::cout << myList.size() << std::endl;
    myList.push_back(3);
    myList.push_back(5);
    myList.push_back(737);
    myList.push_back(0);

    std::list<int>::iterator lit = myList.begin();
    std::list<int>::iterator lite = myList.end();
    ++lit;
    --lit;

    while (lit != lite) {
        std::cout << *lit << std::endl;
        ++lit;
    }
    return 0;
}