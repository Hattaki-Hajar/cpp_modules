/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:24:28 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/26 16:40:38 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("one");
	ClapTrap b("two");
	a.attack(b.getName());
	b.takeDamage(5);
	b.takeDamage(5);
	b.takeDamage(5);
	b.attack(a.getName());
	std::cout << b.getHit_points() << std::endl;
}
