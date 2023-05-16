/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:27:22 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/16 13:59:53 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump( std::string name )
{
	if (name.empty())
	{
		std::cout << "Invalid input!" << std::endl;
		return ;
	}
	Zombie zombie(name);

	zombie.announce();
}
