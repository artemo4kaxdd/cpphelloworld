#include <iostream>
#include <limits>

int main() {
    std::cout << "Hello World" << std::endl;
    std::cout << "Press Enter to exit..." << std::endl;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return 0;
}
