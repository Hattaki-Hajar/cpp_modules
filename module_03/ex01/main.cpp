/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 19:05:14 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/26 21:03:46 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap	a("Seleno");
	ScavTrap	b;
	std::cout << "Name: " << a.getName() << ", Energy points: "
	<< a.getEnergy_points() << std::endl;
	a.attack(b.getName());
	b.takeDamage(20);
	std::cout << b.getName() << std::endl;
	b = a;
	b.guardGate();
}
