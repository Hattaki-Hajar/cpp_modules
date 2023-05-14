/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 21:14:11 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/13 14:34:02 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_HPP
# define PhoneBook_HPP
#include <iostream>
#include <string.h>
#include "Contact.hpp"

class PhoneBook
{
public:
	Contact c[8];
	int spot;
	int	full;
	void	fillcontact(void);
	void	search_contact(void);
};

#endif