/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:29:02 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/27 16:47:38 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():Name("Mjhol lhawiya")
{
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
	std::cout << "ClapTrap default constructor called." << std::endl;
}


ClapTrap::ClapTrap(std::string name):Name(name)
{
	std::cout << "ClapTrap parametric constructor called." << std::endl;
	if (name == "_clap_name")
		Name = "Mjhol lhawiya_clap_name";
	hit_points = 10;
	energy_points = 10;
	attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
	*this = copy;
	std::cout << "ClapTrap copy constructor called." << std::endl;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& other)
{
	if (this == &other)
		return *this;
	Name = other.getName();
	hit_points = other.getHit_points();
	energy_points = other.getEnergy_points();
	attack_damage = other.getAttack_damage();
	std::cout << "ClapTrap ssignment operator called." << std::endl;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called." << std::endl;
}

std::string	ClapTrap::getName(void) const
{
	return (Name);
}

unsigned int	ClapTrap::getHit_points(void) const
{
	return (hit_points);
}

unsigned int	ClapTrap::getEnergy_points(void) const
{
	return (energy_points);
}

unsigned int	ClapTrap::getAttack_damage(void) const
{
	return (attack_damage);
}

void ClapTrap::attack(const std::string& target)
{
	if (hit_points && energy_points)
	{
		std::cout << "ClapTrap " << Name << " attacks " << target << ", causing "
		<< attack_damage << " points of damage!" << std::endl;
		energy_points--;
	}
	else
		std::cout << "Not enough points to attack!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!hit_points)
		return;
	std::cout << "ClapTrap " << Name << " gets " << amount << " points of damage!"
	<< std::endl;
	if (amount > hit_points)
		hit_points = 0;
	else
		hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hit_points && energy_points)
	{
		std::cout << "ClapTrap " << Name << " repaired gaining "
		<< amount << " points!" << std::endl;
		energy_points--;
		hit_points += amount;
	}
	else
		std::cout << "Not enough points to repair!" << std::endl;
}

