#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	std::string target;

public:
	RobotomyRequestForm(std::string target);
	virtual void execute(Bureaucrat const &executor);
};
