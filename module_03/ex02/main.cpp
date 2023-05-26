/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 19:05:14 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/26 21:27:41 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
	FragTrap	a("Seleno");
	FragTrap	b;
	std::cout << "Name: " << a.getName() << ", Energy points: "
	<< a.getEnergy_points() << std::endl;
	a.attack(b.getName());
	std::cout << b.getName() << "'s hit points: " << b.getHit_points() << std::endl;
	b.takeDamage(20);
	std::cout << b.getName() << "'s hit points: " << b.getHit_points() << std::endl;
	std::cout << b.getName() << std::endl;
	b = a;
	b.highFivesGuys();
}
