#include "converter.hpp"
#include <limits.h>

int	isalldigit(const std::string &s)
{
	unsigned int	i = 0;

	if (s.length() == 1 && (isalpha(s[0]) || (isprint(s[0]) && !isdigit(s[0]))))
		return (3);
	while (i < s.length())
	{
		if ((!isdigit(s[i]) && s[0] != '+' && s[0] != '-') && s[i] != '.')
		{
			if (i == s.length() - 1 && s[i] == 'f')
			{
				if (s.find(".") != std::string::npos
					&& s.find(".") != s.length() - 2
					&& s.find(".") != 0)
					return 2;
			}
			return (0);
		}
		i++;
	}
	return (1);
}

void	ScalarConverter::from_char(void)
{
	i = static_cast<int>(c);
	f = static_cast<float>(c);
	d = static_cast<double>(c);
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << ".0f" << std::endl;
	std::cout << "double: " << d << ".0" << std::endl;
}

void	ScalarConverter::from_int(void)
{
	c = static_cast<char>(i);
	f = static_cast<float>(i);
	d = static_cast<double>(i);
	std::cout << "char: ";
	if (!isprint(c))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << c << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << f << ".0f" << std::endl;
	std::cout << "double: " << d << ".0" << std::endl;
}

void	ScalarConverter::from_float(void)
{
	if (str == "nanf")
		f = NAN;
	if (str == "+inff")
		f = INFINITY;
	if (str == "-inff")
		f = INFINITY * -1;	
	c = static_cast<char>(f);
	i = static_cast<int>(f);
	d = static_cast<double>(f);
	if (f == NAN || f == INFINITY || f == INFINITY * -1)
		std::cout << "char: impossible\nint: impossible" << std::endl;
	else
	{
		std::cout << "char: ";
		if (!isprint(c))
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << c << std::endl;
		if (f > INT_MAX || f < INT_MIN)
			std::cout << "int: impossible" << std::endl;
		else
			std::cout << "int: " << i << std::endl;
	}
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

void	ScalarConverter::from_double(void)
{
	if (str == "nan")
		d = NAN;
	if (str == "+inf")
		d = INFINITY;
	if (str == "-inf")
		d = INFINITY * -1;
	c = static_cast<char>(d);
	i = static_cast<int>(d);
	f = static_cast<float>(d);
	if (d == NAN || d == INFINITY || d == INFINITY * -1)
		std::cout << "char: impossible\nint: impossible" << std::endl;
	else
	{
		std::cout << "char: ";
		if (!isprint(c))
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << c << std::endl;
		std::cout << "int: " << i << std::endl;
	}
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}
