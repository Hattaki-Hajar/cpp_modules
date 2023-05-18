/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 21:26:53 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/17 13:09:06 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	std::cout << "New weapon created!" << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon destroyed!" << std::endl;	
}

Weapon::Weapon(std::string another):type(another)
{
	if (another.empty())
	{
		std::cout << "Invalid weapon!" << std::endl;
		exit (-1);
	}
	std::cout << "New weapon created, and it's a: " << another << std::endl;	
	this->type = another;
}

void	Weapon::setType(std::string another)
{
	if (another.empty())
	{
		std::cout << "Invalid input" << std::endl;
		exit(-1);
	}
	this->type = another;
}

const std::string&	Weapon::getType(void)
{
	const std::string	&final = this->type;
	return (final);
}
