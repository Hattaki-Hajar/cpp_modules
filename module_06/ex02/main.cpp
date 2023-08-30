#include "Base.hpp"

int main()
{
	Base *base;
	Base *b2 = new Base;
	base = generate();
	std::cout << "**** func that takes ptr ****" << std::endl;
	identify(base);
	std::cout << std::endl;
	std::cout << "**** func that takes ref ****" << std::endl;
	identify(*base);
	std::cout << std::endl;
	identify(*b2);
}
