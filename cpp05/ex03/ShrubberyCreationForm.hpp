#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
	std::string target;

public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const &src);
	virtual ~ShrubberyCreationForm() {};
	void execute(Bureaucrat const &executor);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
};

#endif
