#include <iostream>
#include <stdlib.h>
#include <float.h>
#include <cmath>

void print_char(char **av)
{
	double input;
	if (strlen(av[1]) == 1 && ((av[1][0] >= 32 && av[1][0] <= 47) || (av[1][0] >= 58 && av[1][0] <= 126)))
		input = static_cast<double>(av[1][0]);
	else
		input = strtod(av[1], av);
	if (!(input >= 32 && input <= 126))
	{
		std::cout << "char: Non displayable\n";
		return;
	}
	std::cout << "char: '" << static_cast<char>(input) << "'" << std::endl;
}

void print_int(char **av)
{
	if (strlen(av[1]) == 1 && ((av[1][0] >= 32 && av[1][0] <= 47) || (av[1][0] >= 58 && av[1][0] <= 126)))
		std::cout << "int: " << static_cast<int>(av[1][0]) << std::endl;
	else
	{
		double input = strtod(av[1], av);
		if (!(input >= INT_MIN && input <= INT_MAX))
		{
			std::cout << "int: impossible\n";
			return;
		}
		std::cout << "int: " << static_cast<int>(input) << std::endl;
	}
}

void print_float(char **av)
{
	double input;

	if (strlen(av[1]) == 1 && ((av[1][0] >= 32 && av[1][0] <= 47) || (av[1][0] >= 58 && av[1][0] <= 126)))
		input = static_cast<float>(av[1][0]);
	else
		input = strtod(av[1], av);
	if (!(input >= -FLT_MAX && input <= FLT_MAX) && !isnan(input))
	{
		std::cout << input << std::endl;
		std::cout << "float: impossible\n";
		return;
	}
	int len = strlen(av[1]);
	if ((len > 1 && av[1][len - 1] == '0' && av[1][len - 2] == '.') || (len > 1 && av[1][len - 1] == 'f' && av[1][len - 2] == '0' && av[1][len - 3] == '.') || (len == 1 && av[1][0] == '0'))
	{
		std::cout << "float: " << static_cast<float>(input) << ".0f" << std::endl;
		return;
	}
	std::cout << "float: " << static_cast<float>(input) << "f" << std::endl;
}

void print_double(char **av)
{
	double input;

	if (strlen(av[1]) == 1 && ((av[1][0] >= 32 && av[1][0] <= 47) || (av[1][0] >= 58 && av[1][0] <= 126)))
		input = static_cast<double>(av[1][0]);
	else
		input = strtod(av[1], av);
	if (!(input >= -DBL_MAX && input <= DBL_MAX) && !isnan(input))
	{
		std::cout << "double: impossible\n";
		return;
	}
	int len = strlen(av[1]);
	if ((len > 1 && av[1][len - 1] == '0' && av[1][len - 2] == '.') || (len > 1 && av[1][len - 1] == 'f' && av[1][len - 2] == '0' && av[1][len - 3] == '.') || (len == 1 && av[1][0] == '0'))
	{
		std::cout << "double: " << input << ".0" << std::endl;
		return;
	}
	std::cout << "double: " << input << std::endl;
}

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Wrong number of arguments\n";
		return (1);
	}
	print_char(av);
	print_int(av);
	print_float(av);
	print_double(av);
	return (0);
}
