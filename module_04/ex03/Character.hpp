/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 18:11:36 by hhattaki          #+#    #+#             */
/*   Updated: 2023/06/01 22:25:42 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "ICharacter.hpp"

class Character : public ICharacter
{
protected:
	std::string	Name;
	AMateria*	slots[4];

public:
	Character();
	Character(std::string name);
	Character(const Character& copy);
	Character&	operator=(const Character& other);
	~Character();

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};
