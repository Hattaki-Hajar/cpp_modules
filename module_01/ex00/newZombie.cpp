/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:26:05 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/19 22:20:58 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie( std::string name )
{
	Zombie	*zombie;

	if (name.empty())
	{
		std::cout << "Invalid input" << std::endl;
		exit(-1);
	}
	zombie = new Zombie (name);
	return (zombie);
}
