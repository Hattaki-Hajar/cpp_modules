/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:24:32 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/18 22:00:11 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "search_replace.hpp"

int main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string file, search, replace, line;
		std::ifstream	in_file;
		std::string line2;

		file = av[1];
		search = av[2];
		replace = av[3];
		if (search.empty() || replace.empty())
		{
			std::cout << "Invalid input!" << std::endl;
			return 0;
		}
		in_file.open(file);
		if (in_file.bad())
		{
			std::cout << "Couldn't open file!" << std::endl;
			return (0);
		}
		std::ofstream	out_file(file.append(".replace"));
		std::getline(in_file, line, '\0');
		if (!line.empty())
			line2 = replace_content(line, search, replace);
		out_file << line2 << std::endl;
		in_file.close();
	}
}