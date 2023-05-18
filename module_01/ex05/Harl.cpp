/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:45:14 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/18 20:50:45 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	std::cout << "Harl entered the restaurant" << std::endl;
}

Harl::~Harl(void)
{
	std::cout << "Harl left the restaurant" << std::endl;
}

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my" 
	<< "7XL-double-cheese-triple-pickle-specialketchup"
	<< "burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. "
	<< "You didn’t put enough bacon in my burger! If you did,"
	<< "I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free."
	<< " I’ve been coming for years whereas you started"
	<< " working here since last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
	int	lvl, i = 0;
	std::string phrase[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*funcptr[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	
	while (i < 4)
	{
		if (level == phrase[i])
		{
			lvl = i;
			break;
		}
		i++;
	}
	if (i >= 4)
	{
		std::cout << "Level doesn't exist!" << std::endl;
		return ;
	}
	(this->*funcptr[i])();
}

