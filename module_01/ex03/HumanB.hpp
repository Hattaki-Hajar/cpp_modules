/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 22:59:39 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/17 16:03:14 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	Weapon	*armed;
	std::string	name;

public:
	void	setWeapon(Weapon &weapon);
	void	attack(void);
	HumanB(void);
	HumanB(std::string name);
	~HumanB(void);
};

#endif