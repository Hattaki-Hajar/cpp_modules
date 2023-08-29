#include "Data.hpp"

Data::Data():i(5), f(6.5)
{
}

Data::Data(Data const &copy)
{
	*this = copy;
}

Data &Data::operator=(Data const &other)
{
	i = other.i;
	f = other.f;
	return (*this);
}

Data::~Data()
{
}
