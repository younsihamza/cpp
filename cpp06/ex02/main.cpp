#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
Base * generate(void);
void identify(Base* p);
void identify(Base& p);
int main ()
{
   // Base* hamza = NULL;
    Base *p =  dynamic_cast<A*>(generate());
    if(p)
        identify(*p);
}