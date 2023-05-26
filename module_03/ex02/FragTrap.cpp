/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:55:24 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/26 21:22:11 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap():ClapTrap()
{
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	std::cout << "FragTrap default constructor called." << std::endl;
}

FragTrap::FragTrap(std::string name):ClapTrap(name)
{
	hit_points = 100;
	energy_points = 100;
	attack_damage = 30;
	std::cout << "FragTrap constructor called." << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy)
{
	*this = copy;
	std::cout << "FragTrap copy constructor called." << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& other)
{
	if (this == &other)
		return *this;
	Name = other.getName();
	hit_points = other.getHit_points();
	energy_points = other.getEnergy_points();
	attack_damage = other.getAttack_damage();
	std::cout << "FragTrap assignment operator called." << std::endl;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called." << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (hit_points && energy_points)
	{
		std::cout << "FragTrap " << Name << " attacks " << target << ", causing "
		<< attack_damage << " points of damage!" << std::endl;
		energy_points--;
	}
	else
		std::cout << "Not enough points to attack!" << std::endl;
}

void FragTrap::highFivesGuys()
{
	std::cout << "The FragTrap named: " << Name
	<< " asks for high five ^^." << std::endl;
}
