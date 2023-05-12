/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 21:14:27 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/02 21:14:29 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int i = 1, j;
	char c;
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			c = toupper(av[i][j]);
			std::cout << c;
			j++;
		}
		std::cout << " ";
		i++;
	}
	std::cout << std::endl;
}