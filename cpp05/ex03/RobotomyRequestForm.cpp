#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), target(target)
{
}

void RobotomyRequestForm::execute(Bureaucrat const &executor)
{
	if (executor.getGrade() > this->getExecuteGrade())
		throw GradeTooLowException();
	else if (!this->getSignature())
		throw("The form is not signed, cannot execute\n");
	else
	{
		std::cout << "Form " << this->getName() << " is executed by " << executor.getName() << std::endl;
		std::cout << "Drrrrzzzz brrrrrr ghrrrrrr" << std::endl;
		std::cout << this->target << " has been robotomized successfully 50% of the time" << std::endl;
	}
}
