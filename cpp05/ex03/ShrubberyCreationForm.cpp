#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), target(target)
{
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
	if (executor.getGrade() > this->getExecuteGrade())
		throw GradeTooLowException();
	else if (!this->getSignature())
		throw("The form is not signed, cannot execute\n");
	else
	{
		std::cout << "Form " << this->getName() << " is executed by " << executor.getName() << std::endl;
		std::ofstream file(this->target + "_shrubbery");
		int j = 1;
		int l = 11;
		for (int i = 0; i < 11; i++)
		{
			for (int c = l; c > 0; c--)
			{
				file << " ";
			}
			l--;
			for (int k = 0; k < j; k++)
				file << "*";
			j += 2;
			file << "\n";
		}
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 10; j++)
				file << " ";
			for (int j = 0; j < 3; j++)
				file << "*";
			file << "\n";
		}
	}
}