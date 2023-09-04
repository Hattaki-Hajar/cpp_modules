#include "array.hpp"

int main()
{
	const Array<int> arr(5);
	unsigned int size = arr.size();

	for (unsigned int i = 0; i < size; i++)
	{
		arr[i] = 97 + i;
	}
	std::cout << "arr size= " << arr.size() << std::endl;
	std::cout << "arr: ";
	for (unsigned int i = 0; i < size; i++)
	{
		std::cout << arr[i] << ". ";
	}
	std::cout << std::endl;

	Array<char> str(arr);
	size = str.size();
	std::cout << "str size= " << str.size() << std::endl;
	std::cout << "str: ";
	for (unsigned int i = 0; i < size; i++)
	{
		std::cout << str[i];
	}
	std::cout << std::endl;
}
