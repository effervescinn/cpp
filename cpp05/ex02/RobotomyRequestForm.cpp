#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), target(target)
{
}

void RobotomyRequestForm::execute(Bureaucrat const &executor)
{
	if (executor.getGrade() > this->getExecuteGrade() && this->getSignature())
		std::cout << "Failure: " << executor.getName() << " cannot execute form " << this->getName() << std::endl;
	else
	{
		std::cout << "Drrrrzzzz brrrrrr ghrrrrrr" << std::endl;
		std::cout << this->target << " has been robotomized successfully 50% of the time" << std::endl;
	}
}
