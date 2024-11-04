/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:41:13 by arodgers          #+#    #+#             */
/*   Updated: 2024/07/31 16:30:22 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed {

	private :
		int			_fixedPointNumberValue;
		static const int	_fractionalBits = 8;

	public :
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &other);
		
		~Fixed();

		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int	toInt(void) const;
		
		bool	operator>(Fixed other) const;
		bool	operator<(Fixed other) const;
		bool	operator>=(Fixed other) const;
		bool	operator<=(Fixed other) const;
		bool	operator==(Fixed other) const;
		bool	operator!=(Fixed other) const;

		float	operator+(Fixed other) const;
		float	operator-(Fixed other) const;
		float	operator*(Fixed other) const;
		float	operator/(Fixed other) const;

		Fixed	operator++(void);
		Fixed	operator--(void);

		Fixed	operator++(int);
		Fixed	operator--(int);

		static Fixed		&min(Fixed &first, Fixed &second);
		static const Fixed	&min(const Fixed &first, const Fixed &second);
		static Fixed		&max(Fixed &first, Fixed &second);
		static const Fixed	&max(const Fixed &first, const Fixed &second);
};

std::ostream	&operator<<(std::ostream &out, Fixed const &fixed);

#endif
