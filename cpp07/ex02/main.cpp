#include "Array.hpp"

int main()
{
	Array<int> arr(6);

	try
	{
		for (int i = 0; i < arr.size(); i++)
			arr[i] = i;
		for (int i = 0; i < arr.size(); i++)
			std::cout << arr[i] << (i == arr.size() - 1 ? "\n" : ",");
		// std::cout << arr[arr.size() + 1];
		std::cout << "Everything is fine\n";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	// try
	// {
	// 	Array<int> array;
	// 	std::cout << "Everything is fine\n";
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	
	return 0;
}
