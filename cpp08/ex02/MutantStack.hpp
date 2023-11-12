#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>
#include <vector>
#include <iostream>
#include <iterator>

template <typename T>
class MutantStack: public std::stack<T>{
    private:
        
        std::vector<T> myData;
    public:
        typedef typename std::deque<T>::iterator iterator;
        MutantStack(){};
        MutantStack& operator=( MutantStack& main)
        {
            if(this != &main)
            {
                myData.clear();
                for(int i = 0 ; i < main.myData.size(); i++)
                {   
                std::cout << "hamza"<<std::endl;
                    
                    push(main.myData.at(i));
                }
            }
            return *this;
        }

        MutantStack( MutantStack& main)
        {
            if(this != &main)
                *this = main;
        }

        void push(T data)
        {
            myData.push_back(data);
            std::stack<T>::push(data);
        }

        void pop()
        {
            myData.pop_back();
            std::stack<T>::pop();
        }
        
        iterator begin()  
        {
            return (c.begin());
        }
        iterator end() 
        {
            return (c.end());
        }
        ~MutantStack()
        {

        }
};

#endif