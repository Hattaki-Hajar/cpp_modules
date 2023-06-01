/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 13:45:06 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/29 20:37:12 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include <iostream>
#include <string.h>

class Brain
{
protected:
	std::string	ideas[100];

public:
	Brain();
	Brain(const Brain& copy);
	Brain&	operator=(const Brain&	other);
	~Brain();

	void	setIdea(std::string add);
	std::string	getIdea(void);
};
