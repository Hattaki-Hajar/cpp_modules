/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:15:36 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/22 22:12:57 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(),y()
{
	// std::cout << "Default constructor called" << std::endl;
}

Point::Point(float one, float two):x(one),y(two)
{
	// std::cout << one << ", " << two << std::endl;
	// std::cout << "Parameterized constructor called" << std::endl;
}

Point::Point(const Point &copy):x(copy.getX()),y(copy.getY())
{
	// std::cout << "Copy constructor called" << std::endl;
}

Point& Point::operator=(const Point& other)
{
	(void)other;
	// std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

Fixed Point::getX() const
{
	return (x);
}

Fixed Point::getY() const
{
	return (y);
}

Point::~Point()
{
	// std::cout << "Destructor called" << std::endl;
}
