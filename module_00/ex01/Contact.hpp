/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 21:14:19 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/06 18:25:32 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
public:
	std::string First_Name;
	std::string Last_Name;
	std::string Nickname;
	std::string Phone_Number;
	std::string Darkest_Secret;

	Contact(void);
	~Contact(void);
};

#endif