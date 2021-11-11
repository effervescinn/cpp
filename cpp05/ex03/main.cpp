#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern someRandomIntern;
	Form *rrf;
	
	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	if (rrf)
		std::cout << *rrf << std::endl;

	delete rrf;
	return 0;
}
