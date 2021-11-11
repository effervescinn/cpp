#include "Form.hpp"

Form::Form() : name("Form"), signGrade(150) , executeGrade(150) {}

Form::Form(std::string name, int signGrade, int executeGrade) : name(name), signGrade(signGrade) , executeGrade(executeGrade)
{
	this->signature = false;
	if (signGrade < 1 || executeGrade < 1)
		throw GradeTooHighException();
	if (signGrade > 150 || executeGrade > 150)
		throw GradeTooLowException();
}

Form::Form(Form const &src) : name(src.getName()), signature(src.getSignature()), signGrade(src.getSignGrade()) , executeGrade(src.getExecuteGrade())
{

}

const std::string Form::getName() const
{
	return this->name;
}

int Form::getSignGrade() const
{
	return this->signGrade;
}

int Form::getExecuteGrade() const
{
	return this->executeGrade;
}

bool Form::getSignature() const
{
	return this->signature;
}

void Form::beSigned(Bureaucrat &m)
{
	if (m.getGrade() > this->signGrade)
		throw GradeTooLowException();
	else
		this->signature = true;
}

Form &Form::operator=(const Form &rhs)
{
	(void)rhs;
	return *this;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high\n");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low\n");
}

std::ostream &operator<<(std::ostream &o, Form const &rhs)
{
	o << "Form " << rhs.getName();
	if (rhs.getSignature())
		o << " is signed";
	else
		o << " is not signed";
	o << ", grade to sign: " << rhs.getSignGrade() << ", grade to execute: " << rhs.getExecuteGrade();
	return o;
}
