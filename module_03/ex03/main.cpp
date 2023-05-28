/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 15:34:28 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/27 16:25:40 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap a("");
	DiamondTrap b;
	std::cout << "Name: " << a.getName() << ", HP: " << a.getHit_points()
	<< ", EP: " << a.getEnergy_points() << ", AT: " << a.getAttack_damage() << std::endl;
	a.guardGate();
	a.highFivesGuys();
	a.attack(b.getName());
	a.whoAmI();
	b.whoAmI();
}
