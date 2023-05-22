/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:02:18 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/22 21:43:11 by hhattaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Fixed.hpp"

class Point
{
private:
	const Fixed	x;
	const Fixed	y;
	
public:
	Point();
	Point(float one, float two);
	Point(const Point &copy);
	Point& operator=(const Point& other);
	Fixed	getX() const;
	Fixed	getY() const;
	~Point();
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
