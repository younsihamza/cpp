 #ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <iostream>
#include <vector>
#include <stack>

template <typename T> class MutantStack: public std::stack<T> {
    private:
        std::vector<T> hold;
    public:
        typedef typename std::vector<T>::iterator iterator;
        iterator begin()
        {
            return hold.begin();
        }

        iterator end()
        {
            return hold.end();
        }

        void pop()
        {
            hold.pop_back();
            std::stack<T>::pop();
        }

        void push(T iteam)
        {
            hold.push_back(iteam);
            std::stack<T>::push(iteam);
        }
};


#endif