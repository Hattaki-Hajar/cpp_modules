#include "converter.hpp"
#include <limits.h>
#include <cfloat>

void	ScalarConverter::print_char(void)
{
	if (store > CHAR_MAX || store < CHAR_MIN
		|| str.find("nan") != std::string::npos
		|| str.find("inf") != std::string::npos)
		std::cout << "char: impossible" << std::endl;
	else if (!isprint(c))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << c << std::endl;
}

void	ScalarConverter::print_int(void)
{
	if (store > INT_MAX || store < INT_MIN
		|| str.find("nan") != std::string::npos
		|| str.find("inf") != std::string::npos)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
}

void	ScalarConverter::print_float(void)
{
	if ((store > FLT_MAX
		|| store < -FLT_MAX) && f != INFINITY && f != -INFINITY && f != NAN)
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << f;
}

void	ScalarConverter::print_double(void)
{
	if ((store > DBL_MAX
		|| store < -DBL_MAX) && d != INFINITY && d != -INFINITY && d != NAN)
		std::cout << "double: impossible" << std::endl;
	else
		std::cout << "double: " << d;
}
