/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 21:22:40 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/18 21:22:40 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*------------------------------------------------------*/
	/* Copy Control */
/*------------------------------------------------------*/
Fixed::Fixed():value(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int val):value(val << fractional_bits)
{
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float val):value((int)round( val * (1 << fractional_bits)))
{
	// std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &ob):value(ob.value)
{
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &ob)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if  (this == &ob)
		return *this;
	this->value = ob.value;
	return (*this);
}
/*------------------------------------------------------*/
	/* Other operators and member functions */
/*------------------------------------------------------*/
int	Fixed::getRawBits( void ) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void	Fixed::setRawBits( int const raw )
{
	value = raw;
}

float	Fixed::toFloat( void ) const
{
	return ((float)value / (float)(1 << fractional_bits));
}

int	Fixed::toInt( void ) const
{
	return (value >> fractional_bits);
}

std::ostream &operator<<(std::ostream &stream, const Fixed &ob)
{
	stream << ob.toFloat();
	return (stream);
}
/*------------------------------------------------------*/
/* comparison operators */
/*------------------------------------------------------*/
bool	Fixed::operator<(const Fixed &ob)
{
	if (this->getRawBits() < ob.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>(const Fixed &ob)
{
	if (this->getRawBits() > ob.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(const Fixed &ob)
{
	if (this->getRawBits() <= ob.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(const Fixed &ob)
{
	if (this->getRawBits() >= ob.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(const Fixed &ob)
{
	return (this->getRawBits() == ob.getRawBits());
}

bool	Fixed::operator!=(const Fixed &ob)
{
	return !(*this == ob);
}
/*------------------------------------------------------*/
	/* arithmetic operators  */
/*------------------------------------------------------*/
Fixed	Fixed::operator+(const Fixed &ob)
{
	return (Fixed(this->toFloat() + ob.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &ob)
{
	return (Fixed(this->toFloat() - ob.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &ob)
{
	return (Fixed(this->toFloat() * ob.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &ob)
{
	return (Fixed(this->toFloat() / ob.toFloat()));
}
/*------------------------------------------------------*/
	/* increment/decrement */
/*------------------------------------------------------*/
Fixed	&Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed	&Fixed::operator--()
{
	this->value--;
	return (*this);
}
Fixed	Fixed::operator++(const int )
{
	Fixed a (this->toFloat());
	this->value++;
	return (a);
}

Fixed	Fixed::operator--(const int )
{
	Fixed a (this->toFloat());
	this->value--;
	return (a);
}
/*------------------------------------------------------*/
	/* min min max max */
/*------------------------------------------------------*/
Fixed	&Fixed::min(Fixed& a, Fixed& b)
{
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
}

const Fixed	&Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
}

Fixed	&Fixed::max(Fixed& a, Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return (b);
	return (a);
}

const Fixed	&Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a.getRawBits() < b.getRawBits())
		return (b);
	return (a);
}
/*------------------------------------------------------*/