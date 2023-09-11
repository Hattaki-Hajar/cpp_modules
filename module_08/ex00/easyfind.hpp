#pragma once

#include <iostream>
#include <algorithm>

template<typename T>
typename T::const_iterator	easyfind(const T &c, int n)
{
	typename T::const_iterator iter = std::find(c.begin(), c.end(), n);
	if (iter == c.end())
	{
		throw std::runtime_error("Element not found!");
	}
	std::cout << "Element found!" << std::endl;
	return (iter);
}
