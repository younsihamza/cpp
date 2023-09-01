#include "Serializer.hpp"

int main()
{
    Data *hamza = new Data();
    hamza->a = 69;
    hamza->z = 5;
    hamza->hamza = "hamza";
   uintptr_t h = Serializer::serialize(hamza);
   hamza =  Serializer::deserialize(h);


}