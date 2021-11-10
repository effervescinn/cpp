#include <iostream>
#include <exception>

class Bureaucrat
{
	std::string const name;
	int grade;

public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const &src);
	~Bureaucrat(){};
	Bureaucrat &operator=(Bureaucrat const &rhs);
	int getGrade();
	std::string getName();
	void incrementGrade();
	void decrementGrade();

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
