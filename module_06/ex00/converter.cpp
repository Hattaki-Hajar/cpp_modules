#include "converter.hpp"

std::string ScalarConverter::str = "";
int	ScalarConverter::type = 0;
int	ScalarConverter::i = 0;
float	ScalarConverter::f = 0;
double	ScalarConverter::d = 0;
char	ScalarConverter::c = 0;

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(char *s)
{
	str = s;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
	*this = copy;
}

ScalarConverter	ScalarConverter::operator=(const ScalarConverter &other)
{
	(void)other;
	return *this;
}

int	ScalarConverter::parser(void)
{
	int i = 1;

	if (isalldigit(str) == 2 || str == "-inff"
		|| str == "+inff" || str == "nanf")
		type = FLOAT;
	else if (isalldigit(str) == 1 || str == "nan"
		|| str == "+inf" || str == "-inf")
	{
		type = DOUBLE;
		if (str != "nan" && str != "-inf" && str != "+inf")
		{
			if (str.find(".") == std::string::npos)
				type = INT;
		}
	}
	else if (isalldigit(str) == 3)
		type = CHAR;
	else
		i = 0;
	return i;
}

void	ScalarConverter::convert(std::string str)
{
	if (type == CHAR)
	{
		c = str[0];
		from_char();
	}
	if (type == INT)
	{
		i = atoi(str.c_str());
		from_int();
	}
	if (type == FLOAT)
	{
		f = atof(str.c_str());
		from_float();
	}
	if (type == DOUBLE)
	{
		d = atof(str.c_str());
		from_double();
	}
}

ScalarConverter::~ScalarConverter()
{
}
