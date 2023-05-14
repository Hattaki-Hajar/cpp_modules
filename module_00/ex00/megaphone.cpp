/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 21:14:27 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/14 13:05:19 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int i = 1, j;
	std::string str;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (i < ac)
	{
		j = 0;
		str = av[i];
		while (str[j])
			std::cout << (char)toupper(str[j++]);
		std::cout << " ";
		i++;
	}
	std::cout << std::endl;
}
	