#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat test("Kolya", 1);
		test.decrementGrade();
		std::cout << test.getGrade() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what();
	}

	return 0;
}
