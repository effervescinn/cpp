#ifndef FORM_H
#define FORM_H

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

private:
	std::string const name;
	bool signature;
	int const signGrade;
	int const executeGrade;

public:
	Form();
	Form(std::string name, int signGrade, int executeGrade);
	Form(Form const &src);
	virtual ~Form() {};
	const std::string getName() const;
	bool getSignature() const;
	int getSignGrade() const;
	int getExecuteGrade() const;
	void beSigned(Bureaucrat &m);
	virtual void execute(Bureaucrat const &executor) = 0;
	Form &operator=(const Form &rhs);

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &o, Form const &rhs);

#endif