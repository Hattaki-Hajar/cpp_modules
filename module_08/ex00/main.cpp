#include "easyfind.hpp"
#include<vector>

int main()
{
	try
	{
		std::vector<int> m;
		m.push_back(1);
		m.push_back(2);
		m.push_back(3);
		m.push_back(4);
		for(int i = 0; i < 4; i++)
			std::cout << m[i] << ". ";
		std::cout << std::endl;
		easyfind(m, 21);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}