#include "span.hpp"

int main()
{
	Span sp = Span(8);

	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::vector<int> arr; //вектор, который нужно добавить в вектор выше
		arr.push_back(1);
		arr.push_back(2);
		arr.push_back(3);
		// arr.push_back(4); //exception
		sp.addNumber(arr.begin(), arr.end());

		sp.getNumbers();

		std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
		std::cout << "longest span: " << sp.longestSpan() << std::endl;

		// Span sp2 = Span(0);
		// std::cout << "shortest span: " << sp.shortestSpan() << std::endl; //exception
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
