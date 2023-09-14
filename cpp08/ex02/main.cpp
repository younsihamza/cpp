#include "MutantStack.hpp"
#include <iostream>

int main()
{
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
MutantStack<int> r(mstack);
mstack.push(3);
mstack.push(5);
mstack.push(737);
std::cout <<"||||"<< mstack.size() <<"||||"<< r.size() << std::endl;
//[...]
mstack.push(0);
MutantStack<int>::iterator it = r.begin();
MutantStack<int>::iterator ite = r.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
    std::stack<int> s(mstack);
}