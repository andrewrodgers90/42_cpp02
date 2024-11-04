/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 13:14:12 by arodgers          #+#    #+#             */
/*   Updated: 2024/08/09 17:13:18 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0)
{
// 	std::cout << "Point Default constructor called" << std::endl;
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
//	std::cout << "Point Constructor called" << std::endl;
}

Point::Point(const Point &original) : _x(original.getX()), _y(original.getY())
{
//	std::cout << " Point Copy constructor called" << std::endl;
}

Point &Point::operator=(const Point &original)
{
//	std::cout << "Point Copy assignment constructor called" << std::endl;

	if (this == &original)
		return (*this);
	return (*this);
}

Point::~Point()
{
//	std::cout << "Point Default destructor called" << std::endl;
}

const Fixed	&Point::getX(void) const
{
//	std::cout << "getX called" << std::endl;
	return (this->_x);
}

const Fixed	&Point::getY(void) const
{
//	std::cout << "getY called" << std::endl;
	return (this->_y);
}
