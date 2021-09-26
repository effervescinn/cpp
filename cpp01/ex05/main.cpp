#include "Karen.hpp"

int main() {
    Karen karen;
    std::string mode;

    while (std::getline (std::cin, mode)) {
        karen.complain(mode);
    }
    
    return 0;
}