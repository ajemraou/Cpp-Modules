/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:14:55 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/18 13:14:55 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed():value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed &ob)
{
	std::cout << "Copy constructor called" << std::endl;
	operator=(ob);
}

Fixed &Fixed::operator=(Fixed &ob)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if  (this == &ob)
		return *this;
	this->setRawBits(ob.getRawBits());
	return (*this);
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void	Fixed::setRawBits( int const raw )
{
	value = raw;
}
