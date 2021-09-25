#include <iostream>

int main() {
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "str address: " << &str << std::endl;
    std::cout << "str address by ptr: " << stringPTR << std::endl;
    std::cout << "str address by ref: " << &stringREF << std::endl;
    return 0;
}
