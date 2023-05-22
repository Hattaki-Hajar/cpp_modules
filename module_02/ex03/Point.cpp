/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:15:36 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/22 14:22:33 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point();
{
	x.setRawBits(0);
	y.setRawBits(0);
	std::cout << "Default constructor called" << std::endl;
}

Point::Point(float one, float two)
{
	x.Fixed(one);
	x.Fixed(one);
	std::cout << "Parameterized constructor called" << std::endl;
}

Point::Point(const Point &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}
