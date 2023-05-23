/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 18:02:13 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/23 16:43:27 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	store_fixed = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called" << std::endl;
	store_fixed = value << fraction_store;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called" << std::endl;
	store_fixed = roundf(value * (1 << fraction_store));
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	store_fixed = other.getRawBits();
	return *this;
}

float Fixed::toFloat( void ) const
{
	return ((float)store_fixed / (1 << fraction_store));
}

int Fixed::toInt( void ) const
{
	return (store_fixed >> fraction_store);
	
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (store_fixed);
}

void Fixed::setRawBits( int const raw )
{
	store_fixed = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
