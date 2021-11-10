#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : name(src.name)
{
	*this = src;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	this->grade = rhs.grade;
	return *this;
}

int Bureaucrat::getGrade()
{
	return this->grade;
}

std::string Bureaucrat::getName()
{
	return this->name;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high\n");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low\n");
}

void Bureaucrat::incrementGrade()
{
	if (this->grade <= 1)
		throw GradeTooHighException();
	else
		(this->grade)--;
}

void Bureaucrat::decrementGrade()
{
	if (this->grade >= 150)
		throw GradeTooLowException();
	else
		(this->grade)++;
}
