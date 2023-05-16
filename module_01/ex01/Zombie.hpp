/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 14:50:30 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/16 16:34:00 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class	Zombie
{
private:
	std::string name;

public:
	void	announce( void );
	void	set_name(std::string name);
	int index;
	Zombie(void);
	~Zombie(void);
};

Zombie*	ZombieHorde( int N, std::string name );

#endif
