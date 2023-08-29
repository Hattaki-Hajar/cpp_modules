#pragma once

#include "Data.hpp"
# include  <cstdint>

class Serializer
{
	Serializer();
	Serializer(Serializer const &d);
public:
	/*  Canonical form  */
	Serializer &operator=(Serializer const &d);
	~Serializer();
	/*  Additional funcs  */
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};

