/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:35:29 by hhattaki          #+#    #+#             */
/*   Updated: 2023/06/01 17:00:38 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria* materia) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource
{
	AMateria	*m[4];

public:
	MateriaSource();
	MateriaSource(const MateriaSource& copy);
	MateriaSource&	operator=(const MateriaSource& other);
	~MateriaSource();

	void learnMateria(AMateria* materia);
	AMateria* createMateria(std::string const & type);
};	
