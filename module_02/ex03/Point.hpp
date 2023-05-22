/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhattaki <hhattaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 14:02:18 by hhattaki          #+#    #+#             */
/*   Updated: 2023/05/22 14:20:10 by hhattaki         ###   ########.fr       */
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
	~Point();
}
