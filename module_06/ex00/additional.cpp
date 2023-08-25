#include "converter.hpp"

int	isalldigit(const std::string &s)
{
	unsigned int	i = 0;

	if (s.length() == 1 && (isalpha(s[0]) || isprint(s[0])))
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
}

void	ScalarConverter::from_int(void)
{
	c = static_cast<char>(i);
	f = static_cast<float>(i);
	d = static_cast<double>(i);
	std::cout << c << " * " << i << " * " << f << " * " << d << std::endl;
}

void	ScalarConverter::from_float(void)
{
	if (str == "nanf")
		f = NAN;
	c = static_cast<char>(f);
	i = static_cast<int>(f);
	d = static_cast<double>(f);
	std::cout << c << " * " << i << " * " << f << " * " << d << std::endl;
}

void	ScalarConverter::from_double(void)
{
	c = static_cast<char>(d);
	i = static_cast<int>(d);
	f = static_cast<float>(d);
	std::cout << c << " * " << i << " * " << f << " * " << d << std::endl;
}
