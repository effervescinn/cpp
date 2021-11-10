#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	std::string target;

public:
	PresidentialPardonForm(std::string target);
	virtual void execute(Bureaucrat const &executor);
};
