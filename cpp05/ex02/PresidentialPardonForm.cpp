#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), target(target)
{
}

void PresidentialPardonForm::execute(Bureaucrat const &executor)
{
	if (executor.getGrade() > this->getExecuteGrade() && this->getSignature())
		std::cout << "Failure: " << executor.getName() << " cannot execute form " << this->getName() << std::endl;
	else
	{
		std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
	}
}
