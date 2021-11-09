#include <iostream>
#include <exception>

class Bureaucrat
{
	std::string const name;
	int grade;

public:
	int getGrade();
	std::string getName();
	void incrementGrade();
	void decrementGrade();

	class GradeTooHighException :: public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade is too high");
			}
	}

	class GradeTooLowException :: public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("Grade is too low");
			}
	}
}
