/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 16:24:32 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/18 15:10:42 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "search_replace.hpp"

std::string	get_str(std::string msg)
{
	std::string str;

	while(1)
	{
		std::cout << msg;
		getline(std::cin, str);
		if (str.empty())
			std::cout << "Invalid input!" << std::endl;
		else
			break ;
	}
	return (str);
}

std::string	replace_content(std::string line, std::string search, std::string replace)
{
	std::string	final1;
	size_t	found, start = 0, s_len = search.length(), save;

	found = line.find(search);
	while (found != std::string::npos)
	{
		save = found;
		final1 += line.substr(start, found - start);
		start = found + s_len;
		final1 += replace;
		found = line.find(search, start);
	}
	final1 += line.substr(save + s_len, line.length() - save - s_len - 1);
	return (final1);
}

int main()
{
	std::string file, search, replace, line;
	std::ifstream	in_file;
	std::string line2;

	file = get_str("Enter the name of the file: ");
	search = get_str("Enter the string to search: ");
	replace = get_str("Enter the string to replace: ");
	in_file.open(file);
	if (!in_file.good())
	{
		std::cout << "Couldn't open file!" << std::endl;
		return (0);
	}
	std::ofstream	out_file(file.append(".replace"));
	std::getline(in_file, line, '\0');
	line2 = replace_content(line, search, replace);
	out_file << line2 << std::endl;
	in_file.close();
}