#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP


 #include <iostream>

struct Data{
    int a;
    int z;
    std::string hamza;
};

class Serializer
{
    private:
        Serializer();
        Serializer(Serializer const & main);
        Serializer& operator=(Serializer const &main);
    public:
        static uintptr_t serialize(Data* ptr); 
        static Data* deserialize(uintptr_t raw);


};
#endif