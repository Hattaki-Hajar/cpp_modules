/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:47:01 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/11 15:06:34 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <string.h>

int main()
{
	PhoneBook meh;
	std::string	line;

	meh.spot = 0;
	meh.full = 0;
	while (1)
	{
		std::cout << "Choose a command: ADD, SEARCH, EXIT" << std::endl;
		std::getline(std::cin, line);
		if (std::cin.eof())
			return (0);
		if (!line.empty() && line != "ADD" && line != "SEARCH" && line != "EXIT")
			std::cout << "Invalid command" << std::endl;
		else if (line == "EXIT")
			return (0);
		else if (line == "ADD")
			meh.fillcontact();
		else if (line == "SEARCH")
			meh.search_contact();
		line.clear();
	}
}
