#pragma once

#include <iostream>

class ScalarConverter
{
	static int		i;
	static float	f;
	static double	d;
	static char		c;
	static std::string	str;

public:
	/*  Canonical form  */
	ScalarConverter();
	ScalarConverter(char *s);
	ScalarConverter(const ScalarConverter &copy);
	ScalarConverter	operator=(const ScalarConverter &other);
	~ScalarConverter();
	/*  Setter  */
	// void	SetStr(std::string &s);
	/*  Additional  */
	static void	convert(std::string str);
	int	parser(void);
	/*  Converters  */
};

int	isalldigit(std::string &s);
