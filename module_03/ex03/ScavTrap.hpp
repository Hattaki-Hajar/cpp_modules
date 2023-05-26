/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:47:28 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/26 20:51:47 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);	
	ScavTrap(const ScavTrap& copy);
	ScavTrap&	operator=(const ScavTrap& other);
	~ScavTrap();

	void attack(const std::string& target);
	void guardGate();
};
