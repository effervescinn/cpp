#ifndef ROBOTOMYREQUESTFORM_H
#define ROBOTOMYREQUESTFORM_H

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	std::string target;

public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const &src);
	virtual ~RobotomyRequestForm() {};
	virtual void execute(Bureaucrat const &executor);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
};

#endif