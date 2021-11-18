#include "iter.hpp"

int main()
{
	int arr[] = { 1, 1, 2, 3, 5, 8 };
	std::cout << "arr: ";
	for (int i = 0; i < 6; i++)
		std::cout << arr[i] << (i == 5 ? "\n" : ",");
	std::cout << "calling iter...\n";
	iter(arr, 6, &pow);
	std::cout << "arr: ";
	for (int i = 0; i < 6; i++)
		std::cout << arr[i] << (i == 5 ? "\n" : ",");

	std::cout << std::endl;

	char arr2[] = { 'a', 'b', 'c', 'd', 'e', 'f' };

	std::cout << "arr: ";
	for (int i = 0; i < 6; i++)
		std::cout << arr2[i] << (i == 5 ? "\n" : ",");
	std::cout << "calling iter...\n";
	iter(arr2, 6, &iterChar);
	std::cout << "arr: ";
	for (int i = 0; i < 6; i++)
		std::cout << arr2[i] << (i == 5 ? "\n" : ",");
	return 0;
}
