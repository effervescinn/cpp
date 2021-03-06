#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat"), grade(150) {}

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

int Bureaucrat::getGrade() const
{
	return this->grade;
}

const std::string Bureaucrat::getName() const
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

void Bureaucrat::signForm(Form &form)
{
	if (this->grade > form.getSignGrade())
	{
		std::cout << this->name << " cannot sign " << form.getName() << " because his grade is too low" << std::endl;
		return;
	}
	form.beSigned(*this);
	std::cout << this->name << " signs " << form.getName() << std::endl;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return o;
}