/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 15:18:29 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/16 16:58:45 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* ZombieHorde( int N, std::string name )
{
	Zombie	*horde;
	int	i = 0;

	if (N <= 0)
	{
		std::cout << "Invalid argument" << std::endl;
		exit(-1);
	}
	horde = new Zombie[N];
	while(i < N)
	{
		horde[i].set_name(name);
		horde[i].index = i;
		i++;
	}
	return (horde);
}
