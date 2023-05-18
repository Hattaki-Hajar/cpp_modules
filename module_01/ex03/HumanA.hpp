/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 22:54:06 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/17 15:26:34 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	Weapon	&armed;
	std::string	name;

public:
	void	attack(void);
	HumanA(std::string name, Weapon &init_weapon);
	~HumanA(void);
};

#endif
