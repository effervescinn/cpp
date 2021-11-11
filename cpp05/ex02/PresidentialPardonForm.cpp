#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src)
{
	*this = src;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor)
{
	if (executor.getGrade() > this->getExecuteGrade())
		throw GradeTooLowException();
	else if (!this->getSignature())
		throw("The form is not signed, cannot execute\n");
	else
	{
		std::cout << "Form " << this->getName() << " is executed by " << executor.getName() << std::endl;
		std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
	}
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	this->target = rhs.target;
	return *this;
}
