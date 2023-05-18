/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 20:57:00 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/17 15:47:15 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class	Weapon
{
	std::string	type;
	
public:
	const std::string&	setType(void);
	void	setType(std::string another);
	const std::string&	getType(void);
	Weapon(void);
	Weapon(std::string another);
	~Weapon(void);
};

#endif
