#include "iter.hpp"

int main()
{
	int	test[4] = {1, 5, -5, 0};
	char str[4] = "meh";

	std::cout << "******* int ********" << std::endl;
	std::cout << "before: " << test[0] << ", " << test[1]
	<< ", " << test[2] << ", " << test[3] << std::endl;
	iter<int>(test, 4, substract<int>);
	std::cout << "after: " << test[0] << ", " << test[1]
	<< ", " << test[2] << ", " << test[3] << std::endl << std::endl;

	std::cout << "******* char ********" << std::endl;
	std::cout << "before: " << str << std::endl;
	iter<char>(str, 3, substract<char>);
	std::cout << "after: " << str << std::endl;
}
