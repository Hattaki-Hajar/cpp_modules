/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:55:24 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/26 20:52:30 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap()
{
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	std::cout << "ScavTrap default constructor called." << std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name)
{
	hit_points = 100;
	energy_points = 50;
	attack_damage = 20;
	std::cout << "ScavTrap constructor called." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
	*this = copy;
	std::cout << "ScavTrap copy constructor called." << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& other)
{
	if (this == &other)
		return *this;
	Name = other.getName();
	hit_points = other.getHit_points();
	energy_points = other.getEnergy_points();
	attack_damage = other.getAttack_damage();
	std::cout << "ScavTrap assignment operator called." << std::endl;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (hit_points && energy_points)
	{
		std::cout << "ScavTrap " << Name << " attacks " << target << ", causing "
		<< attack_damage << " points of damage!" << std::endl;
		energy_points--;
	}
	else
		std::cout << "Not enough points to attack!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "The ScavTrap named: " << Name
	<< " is now in Gate keeper mode." << std::endl;
}
