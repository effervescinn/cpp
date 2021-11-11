#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat test("Kolya", 1);
		test.decrementGrade();
		// test.incrementGrade();
		std::cout << test << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what();
	}

	return 0;
}
