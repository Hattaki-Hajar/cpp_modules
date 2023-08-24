#include "converter.hpp"

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
	if (!isalldigit(str)
		&& str != "nan" && str != "nanf"
		&& str != "-inff" && str != "+inff"
		&& str != "+inf" && str != "-inf")
		return 0;
	return 1;
}



ScalarConverter::~ScalarConverter()
{
}
