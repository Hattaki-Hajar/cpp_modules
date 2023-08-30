#include "Serializer.hpp"

int main()
{
	Data		meh;
	Data		*ptr;
	uintptr_t	r;

	r = Serializer::serialize(&meh);
	ptr = Serializer::deserialize(r);
	meh.i = 5;
	meh.f = 4.2;
	std::cout << "original's float var: " << meh.f << std::endl;
	std::cout << "original's int var: " << meh.i << std::endl;
	std::cout << "serialization result's var: " << (*ptr).f << std::endl;
	
	meh.f = 10.5;

	std::cout << std::endl << "original's var: " << meh.f << std::endl;
	std::cout << "serialization result's var: " << (*ptr).f << std::endl;
	std::cout << "serialization result's int var: " << (*ptr).i << std::endl;
}
