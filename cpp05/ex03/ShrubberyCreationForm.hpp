#ifndef SHRUBBERYCREATIONFORM_H
#define SHRUBBERYCREATIONFORM_H

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
	std::string target;

public:
	ShrubberyCreationForm(std::string target);
	void execute(Bureaucrat const &executor);
};

#endif
