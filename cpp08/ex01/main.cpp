#include "span.hpp"

int main()
{
	Span test(6);
	
	test.addNumber(3);
	test.addNumber(10);
	test.addNumber(76);
	test.addNumber(191);
	test.addNumber(4);
	test.addNumber(4);
	std::cout << test.shortestSpan() << std::endl;
	std::cout << test.longestSpan() << std::endl;
	return 0;
}
