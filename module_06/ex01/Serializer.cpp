#include "Serializer.hpp"

Serializer::Serializer()
{
}

Serializer::Serializer(Serializer const &copy)
{
	*this = copy;
}

Serializer &Serializer::operator=(Serializer const &other)
{
	(void)other;
	return (*this);
}

uintptr_t serialize(Data* ptr)
{
	uintptr_t	r;

	r = reinterpret_cast<uintptr_t>(ptr);
	return (r);
}
Data* deserialize(uintptr_t raw)
{
	Data	*ptr;

	ptr = reinterpret_cast<Data *>(raw);
	return (ptr);
}

Serializer::~Serializer()
{
}
