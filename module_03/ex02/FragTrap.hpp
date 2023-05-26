/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 18:47:28 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/26 21:19:00 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);	
	FragTrap(const FragTrap& copy);
	FragTrap&	operator=(const FragTrap& other);
	~FragTrap();

	void attack(const std::string& target);
	void highFivesGuys();
};
