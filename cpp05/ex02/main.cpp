#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	try
	{
		Bureaucrat Kolya("kolya", 1);
		ShrubberyCreationForm Form("home");
		Kolya.signForm(Form);
		Form.execute(Kolya);
		// Kolya.executeForm(Form);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what();
	}
	catch(char const *s)
	{
		std::cerr << s;
	}

	return 0;
}
