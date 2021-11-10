#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{

	try
	{
		Bureaucrat Kolya("Kolya", 12);
		Form form("B182", 40, 30);
		Kolya.signForm(form);
		std::cout << form << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what();
	}

	return 0;
}
