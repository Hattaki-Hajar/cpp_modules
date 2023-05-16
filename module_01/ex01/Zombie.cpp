/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:50:48 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/16 17:01:18 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "New zombie created" << std::endl;
}

void	Zombie::set_name(std::string name)
{
	if (name.empty())
	{
		std::cout << "Invalid input" << std::endl;
		exit(-1);
	}
	this->name = name;
	this->announce();
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie defeated" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
