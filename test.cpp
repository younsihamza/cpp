#include <iostream>

void test()
{
    system("leaks a.out");
}
int main()
{
    atexit(test);
    std::string *a = new std::string[5];
   
}