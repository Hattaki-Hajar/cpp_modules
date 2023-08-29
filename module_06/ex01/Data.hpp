#pragma once

#include <iostream>

class Data
{
public:
	int		i;
	float	f;
	Data();
	Data(Data const &copy);
	Data &operator=(Data const &other);
	~Data();
};
