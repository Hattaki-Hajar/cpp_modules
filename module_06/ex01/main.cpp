#include "Serializer.hpp"

int main()
{
	Data	meh;
	Data	*ptr;
	uintptr_t r;

	r = Serializer::serialize(&meh);
	ptr = Serializer::deserialize(r);

	std::cout << "original: " << &meh << std::endl;
	std::cout << "after serialization: " << ptr << std::endl;

	meh.f = 10.5;

	std::cout << "original's var: " << meh.f << std::endl;
	std::cout << "serialization result's var: " << (*ptr).f << std::endl;
}
