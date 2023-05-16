/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 18:38:09 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/16 15:50:19 by hhattaki         ###   ########.fr       */
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
	Zombie(void);
	Zombie(std::string name1);
	~Zombie(void);
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif
