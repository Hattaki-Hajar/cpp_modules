/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:25:59 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/27 16:25:25 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap():ScavTrap(), FragTrap(),Name("Mjhol_lhawiya")
{
	std::cout << "DiamondTrap deafult consturtor called." << std::endl;
	ClapTrap::Name = "Mjhol_lhawiya_clap_name";
	energy_points = 50;
}

DiamondTrap::DiamondTrap(std::string name):ClapTrap(name+"_clap_name"),ScavTrap(name), FragTrap(name), Name(name)
{
	std::cout << "DiamondTrap parametric consturtor called." << std::endl;
	if (name.empty())
		Name = "Mjhol lhawiya";
	energy_points = 50;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
	*this = copy;
	std::cout << "DiamondTrap copy consturtor called." << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this == &other)
		return *this;
	std::cout << "DiamondTrap assignment operator called." << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called." << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "Diamond name: " << Name << ", Clap name: " << getName() << std::endl;
}
