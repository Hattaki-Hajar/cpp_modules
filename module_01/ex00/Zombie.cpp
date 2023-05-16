/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:28:46 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/16 13:53:05 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "new zombie created" << std::endl;
}

Zombie::Zombie(std::string name1):name(name1)
{
	std::cout << "Prametrized new zombie created" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Destructor called on zombie named: " << name << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
