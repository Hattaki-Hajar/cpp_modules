/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 23:03:37 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/17 16:03:51 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void)
{
	this->armed = 0;
	std::cout << "New HumanB was born!" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB died!" << std::endl;
}

HumanB::HumanB(std::string name)
{
	this->armed = 0;
	if (name.empty())
	{
		std::cout << "Invalid input!" << std::endl;
		exit (-1);
	}
	std::cout << "New HumanB was born, and named: " << name << std::endl;
	this->name = name;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	if ((weapon.getType()).empty())
	{
		std::cout << "Invalid input!" << std::endl;
		exit(-1);
	}
	
	this->armed = &weapon;
}

void	HumanB::attack(void)
{
	if (this->armed)
		std::cout << name << " attacks with their " << this->armed->getType() << std::endl;
	else
	{
		std::cout << name << " doesn't have a weapon!" << std::endl;
		return ;
	}
}
