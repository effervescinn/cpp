#ifndef INTERN_H
#define INTERN_H

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>
class Form;

class Intern
{
	std::string forms[3];
	Form *(Intern::*creation[3])(std::string target);

public:
	Intern();
	~Intern() {};
	Form *createShrubbery(std::string target);
	Form *createRobotomy(std::string target);
	Form *createPresidental(std::string target);
	Form *makeForm(std::string name, std::string target);
};

#endif