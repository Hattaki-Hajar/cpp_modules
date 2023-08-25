#pragma once

#include <iostream>
#include <stdlib.h>
#include <cmath>

# define INT 1
# define FLOAT 2
# define DOUBLE 3
# define CHAR 0
class ScalarConverter
{
	static int		i;
	static float	f;
	static double	d;
	static char		c;
	static std::string	str;

public:
	static int		type;
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
	static int	parser(void);
	static void	from_char(void);
	static void	from_int(void);
	static void	from_float(void);
	static void	from_double(void);
	/*  Converters  */
};

int	isalldigit(const std::string &s);
