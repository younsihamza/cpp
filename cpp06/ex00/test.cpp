#include <iostream>

struct Data {
    int value;
    char status;
};

int main() {
    // Assume we have a block of memory with binary data
    char* rawData = new char[sizeof(Data)];

    // Populate the binary data
    rawData[0] = 0x19;  // value (4 bytes)
    rawData[1] = 0;
    rawData[2] = 0;
    rawData[3] = 0;
    rawData[4] = 'A';   // status (1 byte)

    // Reinterpret the binary data as a Data struct
    Data* data = reinterpret_cast<Data*>(rawData);

    // Access and print the values
    std::cout << "Value: " << data->value << std::endl;
    std::cout << "Status: " << data->status << std::endl;

    // Cleanup
    delete[] rawData;

    return 0;
}