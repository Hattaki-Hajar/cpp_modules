/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:42:50 by hhattaki          #+#    #+#             */
/*   Updated: 2023/06/09 21:57:23 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource constructor called." << std::endl;
	for (int i = 0; i < 4; i++)
		m[i] = 0;
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	(void)copy;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	(void)other;
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	int i = 0;
	while (i < 4 && materia)
	{
		if (!m[i])
		{
			m[i] = materia;
			break;
		}
		i++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	if (type != "cure" && type != "ice")
		return 0;
	int i = 0;
	while (i < 4)
	{
		if (m[i] && m[i]->getType() == type)
			return (m[i]->clone());
		i++;
	}
	return 0;
}

MateriaSource::~MateriaSource()
{
	int i = 0;
	std::cout << "MateriaSource destructor called." << std::endl;
	while (i < 4)
	{
		if (m[i])
			delete m[i];
		i++;
	}
}
