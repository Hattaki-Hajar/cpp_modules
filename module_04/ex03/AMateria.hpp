/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:43:21 by hhattaki          #+#    #+#             */
/*   Updated: 2023/06/01 17:41:41 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>

class ICharacter;

class AMateria
{
protected:
	std::string	Type;

public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria& copy);
	AMateria&	operator=(const AMateria& other);
	virtual ~AMateria();

	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#include "ICharacter.hpp"