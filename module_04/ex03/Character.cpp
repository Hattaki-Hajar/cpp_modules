/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 20:36:41 by hhattaki          #+#    #+#             */
/*   Updated: 2023/06/09 21:09:56 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	// std::cout << "Character constructor called." << std::endl;
	for (int i = 0; i < 4; i++)
		slots[i] = 0;
}

Character::Character(const std::string name):Name(name)
{
	// std::cout << "Character constructor called." << std::endl;
	for (int i = 0; i < 4; i++)
		slots[i] = 0;
}

Character::Character(const Character& copy)
{
	// std::cout << "Character constructor called." << std::endl;
	Name = copy.Name;
	for (int i = 0; i < 4; i++)
	{
		if (copy.slots[i])
			slots[i] = copy.slots[i]->clone();
		else
			slots[i] = 0;
	}
}

Character&	Character::operator=(const Character& other)
{
	if (this == &other)
		return *this;
	int i = 0;
	Name = other.getName();
	while (i < 4)
	{
		if (slots[i])
			delete slots[i];
		if (other.slots[i])
			slots[i] = other.slots[i]->clone();
		else
			slots[i] = 0;
		i++;
	}
	return *this;
}

std::string const & Character::getName() const
{
	return Name;
}

void Character::equip(AMateria* m)
{
	if (m)
	{
		int i = 0;
		while (i < 4 && m)
		{
			if (!slots[i])
			{
				slots[i] = m->clone();
				break ;
			}
			i++;
		}
	}
}

AMateria	*Character::getMateria(int idx)
{
	if (idx >= 0 && idx < 4 && slots[idx])
		return slots[idx];
	return 0;
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && slots[idx])
		slots[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx < 4 && slots[idx])
		slots[idx]->use(target);
}

Character::~Character()
{
	int i = 0;
	while (i < 4)
	{
		if (slots[i])
			delete slots[i];
		i++;
	}
}
