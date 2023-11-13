#include <iostream>
#include <sstream>

int main() {
    std::string inputString = "1230- 456 785 ";
    std::istringstream iss(inputString);
    std::string number;

    // Now, iss can be used like any other input stream
    while (iss >> number) {
        std::cout << "Read number: " << number << std::endl;
    }

    return 0;
}