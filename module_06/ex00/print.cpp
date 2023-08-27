#include "converter.hpp"
#include <limits>
#include <limits.h>

void	ScalarConverter::print_char(void)
{
	if (store > CHAR_MAX
		|| store < CHAR_MIN)
		std::cout << "char: impossible" << std::endl;
	else if (!isprint(c))
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << c << std::endl;
}

void	ScalarConverter::print_int(void)
{
	if (store > INT_MAX
		|| store < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
}

void	ScalarConverter::print_float(void)
{
	if (store > __FLT_MAX__
		|| store < __FLT_MIN__)
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << i << std::endl;
}

void	ScalarConverter::print_double(void)
{
	if (store > __DBL_MAX__
		|| store < __DBL_MIN__)
		std::cout << "double: impossible" << std::endl;
	else
		std::cout << "double: " << i << std::endl;
}
