/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:29:20 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/26 19:14:36 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
protected:
	std::string 	Name;
	unsigned int	hit_points;
	unsigned int	energy_points;
	unsigned int	attack_damage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& copy);
	ClapTrap&	operator=(const ClapTrap& other);
	~ClapTrap();

	std::string	getName(void) const;
	unsigned int	getHit_points(void) const;
	unsigned int	getEnergy_points(void) const;
	unsigned int	getAttack_damage(void) const;

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
