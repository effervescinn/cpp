#include "Intern.hpp"

Intern::Intern()
{
	this->forms[0] = "shrubbery creation";
	this->forms[1] = "robotomy request";
	this->forms[2] = "presidential pardon";
	this->creation[0] = &Intern::createShrubbery;
	this->creation[1] = &Intern::createRobotomy;
	this->creation[2] = &Intern::createPresidental;
}

Intern::Intern(Intern const &src)
{
	*this = src;
}

Form *Intern::createShrubbery(std::string target)
{
	Form *Shrubbery = new ShrubberyCreationForm(target);
	return Shrubbery;
}

Form *Intern::createRobotomy(std::string target)
{
	Form *Robotomy = new RobotomyRequestForm(target);
	return Robotomy;
}

Form *Intern::createPresidental(std::string target)
{
	Form *Presidental = new PresidentialPardonForm(target);
	return Presidental;
}

Form *Intern::makeForm(std::string name, std::string target)
{
	int i;
	for(i = 0; i < 3; i++)
	{
		if (!name.compare(this->forms[i]))
			break;
	}
	if (i >= 3)
	{
		std::cout << "Error: such form doesn't exist" << std::endl;
		return NULL;
	}
	return (this->*creation[i])(target);
}

Intern &Intern::operator=(const Intern &rhs)
{
	for (int i = 0; i < 3; i++)
	{
		this->forms[i] = rhs.forms[i];
		this->creation[i] = rhs.creation[i];
	}
	return *this;
}
