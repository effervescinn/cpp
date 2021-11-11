#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	std::string target;

public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &src);
	virtual ~PresidentialPardonForm() {};
	virtual void execute(Bureaucrat const &executor);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
};

#endif
