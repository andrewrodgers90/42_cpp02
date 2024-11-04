/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 13:01:20 by arodgers          #+#    #+#             */
/*   Updated: 2024/08/04 14:32:39 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class	Point{

	private :
		Fixed const	_x;
		Fixed const	_y;

	public :
		Point();
		Point(const float x, const float y);
		Point(const Point &original);
		Point &operator=(const Point &original);
		~Point();

		const Fixed	&getX(void) const;
		const Fixed	&getY(void) const;
};

#endif
