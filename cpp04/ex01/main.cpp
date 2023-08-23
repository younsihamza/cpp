#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

void test()
{
    system("leaks Animal");
}
int main()
{
    atexit(test);
    Animal *array[100];
    int i  = 0;
    for(i = 0;i < 50;i++)
        array[i] = new Dog();
    for(;i < 100;i++)
        array[i] = new Cat();
    
    for(i = 0; i < 100 ;i++)
        delete array[i];
    
}