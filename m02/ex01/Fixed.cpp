/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 21:23:32 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/18 21:23:32 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int val ):value(val << fractional_bits)
{
	std::cout << "Int constructor called" << std::endl;
}


Fixed::Fixed( const float val ):value(round( val * (1 << fractional_bits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &ob)
{
	std::cout << "Copy constructor called" << std::endl;
	operator=(ob);
}

Fixed &Fixed::operator=(const Fixed &ob)
{
	std::cout << "Copy assignment operator called" << std::endl; 
	if  (this == &ob)
		return *this;
	this->value = ob.value;
	return (*this);
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void    Fixed::setRawBits( int const raw )
{
	value = raw;
}

float Fixed::toFloat( void ) const
{
	return ((float)value / (float)(1 << fractional_bits));
}

int Fixed::toInt( void ) const
{
	return (value >> fractional_bits);
}

std::ostream &operator<<(std::ostream &stream, const Fixed &ob)
{
	stream << ob.toFloat();
	return (stream);
}
