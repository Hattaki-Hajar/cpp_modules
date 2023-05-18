/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 23:10:09 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/17 15:24:25 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// HumanA::HumanA(void)
// {
// 	std::cout << "New HumanA was born!" << std::endl;
// }

HumanA::~HumanA(void)
{
	std::cout << "HumanA died!" << std::endl;
}

HumanA::HumanA(std::string name, Weapon &init_weapon):armed(init_weapon)
{
	if (name.empty())
	{
		std::cout << "Invalid input!" << std::endl;
		exit (-1);
	}
	std::cout << "New HumanA was born, named: " << name 
	<< " and armed with a: " << init_weapon.getType() << std::endl;
	this->name = name;
}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their " << this->armed.getType() << std::endl;
}
