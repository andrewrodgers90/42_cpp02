/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arodgers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 13:14:38 by arodgers          #+#    #+#             */
/*   Updated: 2024/08/09 17:13:42 by arodgers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointNumberValue(0)
{
//	std::cout << "Fixed Default constructor called" << std::endl;
}

Fixed::Fixed(const int value)
{
//	std::cout << "Fixed Int constructor called" << std::endl;
	this->_fixedPointNumberValue = value << _fractionalBits;
}

Fixed::Fixed(const float value)
{
//	std::cout << "Fixed Float constructor called" << std::endl;
	this->_fixedPointNumberValue = roundf(value * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &other)
{
	//std::cout << "Fixed Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	//std::cout << "Fixed Copy assignment operator called" << std::endl;
	if (this == &other)
		return (*this);
	this->_fixedPointNumberValue = other.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	//std::cout << "Fixed Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "Fixed getRawBits member function called" << std::endl;
	return (this->_fixedPointNumberValue);
}

void	Fixed::setRawBits(int const raw)
{
	//std::cout << "Fixed setRawBits member function called" << std::endl;
	this->_fixedPointNumberValue = raw;
}

float	Fixed::toFloat(void) const
{
	return (float)(this->_fixedPointNumberValue) / (float)(1 << this->_fractionalBits);
}

int	Fixed::toInt(void) const
{
	return (this->_fixedPointNumberValue >> this->_fractionalBits);
}

std::ostream	&operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return (out);
}

bool	Fixed::operator>(Fixed other) const
{
	return (this->toFloat() > other.toFloat());
}

bool	Fixed::operator<(Fixed other) const
{
	return (this->toFloat() < other.toFloat());
}

bool	Fixed::operator>=(Fixed other) const
{
	return (this->toFloat() >= other.toFloat());
}

bool	Fixed::operator<=(Fixed other) const
{
	return (this->toFloat() <= other.toFloat());
}

bool	Fixed::operator==(Fixed other) const
{
	return (this->toFloat() == other.toFloat());
}

bool	Fixed::operator!=(Fixed other) const
{
	return (this->toFloat() != other.toFloat());
}

float	Fixed::operator+(Fixed other) const
{
	return (this->toFloat() + other.toFloat());
}

float	Fixed::operator-(Fixed other) const
{
	return (this->toFloat() - other.toFloat());
}

float	Fixed::operator*(Fixed other) const
{
	return (this->toFloat() * other.toFloat());
}

float	Fixed::operator/(Fixed other) const
{
	return (this->toFloat() / other.toFloat());
}

Fixed	Fixed::operator++(void)
{
	this->_fixedPointNumberValue++;
	return (*this);
}

Fixed	Fixed::operator--(void)
{
	this->_fixedPointNumberValue--;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp;

	tmp = *this;
	_fixedPointNumberValue++;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp;

	tmp = *this;
	_fixedPointNumberValue--;
	return (tmp);
}

Fixed	&Fixed::min(Fixed &first, Fixed &second)
{
	return (first.toFloat() <= second.toFloat() ? first : second);
}

const Fixed	&Fixed::min(const Fixed &first, const Fixed &second)
{
	return (first.toFloat() <= second.toFloat() ? first : second);
}

Fixed	&Fixed::max(Fixed &first, Fixed &second)
{
	return (first.toFloat() >= second.toFloat() ? first : second);
}

const Fixed	&Fixed::max(const Fixed &first, const Fixed &second)
{
	return (first.toFloat() >= second.toFloat() ? first : second);
}
