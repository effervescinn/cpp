#include "whatever.hpp"

int main()
{
	int a = 6;
	int b = 10;
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "calling swap(a, b)..." << std::endl;
	swap(a,b);
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "min: " << min(a, b) << std::endl;
	std::cout << "max: " << max(a, b) << std::endl;

	std::cout << "-----------------------" << std::endl;

	std::string str1 = "Peco";
	std::string str2 = "Smile";
	std::cout << "str1: " << str1 << std::endl;
	std::cout << "str2: " << str2 << std::endl;
	std::cout << "calling swap(str1, str2)..." << std::endl;
	swap(str1, str2);
	std::cout << "str1: " << str1 << std::endl;
	std::cout << "str2: " << str2 << std::endl;
	std::cout << "min: " << min(str1, str2) << std::endl;
	std::cout << "max: " << max(str1, str2) << std::endl;
	
	return 0;
}
