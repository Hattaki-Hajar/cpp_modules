/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 13:55:02 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/23 17:54:00 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	store_fixed = 0;
}

Fixed::Fixed(const Fixed &copy): store_fixed(copy.getRawBits())
{
	
}

Fixed::Fixed(const int value)
{
	store_fixed = value << fraction_store;
}

Fixed::Fixed(const float value)
{
	store_fixed = (roundf(value * (1 << fraction_store)));
}

Fixed& Fixed::operator=(const Fixed& other)
{
	if (this == &other)
		return *this;
	store_fixed = other.getRawBits();
	return *this;
}

bool	Fixed::operator>(const Fixed& other)
{
	if (this->store_fixed > other.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(const Fixed& other)
{
	if (this->store_fixed < other.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed& other)
{
	if (this->store_fixed <= other.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed& other)
{
	if (this->store_fixed >= other.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed& other)
{
	if (this->store_fixed == other.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(const Fixed& other)
{
	if (this->store_fixed != other.getRawBits())
		return (true);
	return (false);
}

Fixed Fixed::operator/(const Fixed& other)
{
	Fixed	last((this->toFloat() / other.toFloat()));
	return last;
}

Fixed Fixed::operator+(const Fixed& other)
{
	Fixed	last;
	last.setRawBits(this->getRawBits() + other.getRawBits());
	return last;
}

Fixed Fixed::operator*(const Fixed& other)
{
	Fixed	last((this->toFloat() * other.toFloat()));
	return last;
}

Fixed Fixed::operator-(const Fixed& other)
{
	Fixed	last;
	last.setRawBits(this->getRawBits() - other.getRawBits());
	return last;
}

Fixed	Fixed::operator-()
{
	Fixed	rev(-1);
	return (*this * rev);
}

Fixed&	Fixed::operator++()
{
	setRawBits(getRawBits() + 1);
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);
	this->setRawBits(this->getRawBits() + 1);
	return temp;
}


Fixed&	Fixed::operator--()
{
	setRawBits(getRawBits() - 1);
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);
	this->setRawBits(this->getRawBits() - 1);
	return temp;
}

Fixed&	Fixed::min(Fixed &one, Fixed &two)
{
	if (one.getRawBits() <= two.getRawBits())
		return one;
	return two;
}

Fixed&	Fixed::max(Fixed &one, Fixed &two)
{
	if (one.getRawBits() >= two.getRawBits())
		return one;
	return two;
}

const Fixed&	Fixed::min(const Fixed &one, const Fixed &two)
{
	if (one.getRawBits() <= two.getRawBits())
		return one;
	return two;
}

const Fixed&	Fixed::max(const Fixed &one, const Fixed &two)
{
	if (one.getRawBits() >= two.getRawBits())
		return one;
	return two;
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
	return (store_fixed);
}

void Fixed::setRawBits( int const raw )
{
	this->store_fixed = raw;
}

Fixed::~Fixed()
{
	
}

std::ostream& operator<<(std::ostream &os, const Fixed& point)
{
	os << point.toFloat();
	return (os);
}
