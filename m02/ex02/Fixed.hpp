/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 21:22:49 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/18 21:22:49 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
	int value;
	static const int fractional_bits = 8;
public:
	/* Copy Control */
	Fixed();
	Fixed( const int );
	Fixed( const float );
	Fixed( const Fixed & );
	Fixed &operator=( const Fixed& );
	~Fixed();

	/* Some member functions */
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;

	/* comparison operators */
	bool	operator<( const Fixed& );
	bool	operator>( const Fixed& );
	bool	operator<=( const Fixed& );
	bool	operator>=( const Fixed& );
	bool	operator==( const Fixed& );
	bool	operator!=( const Fixed& );

	/* arithmetic operators  */
	Fixed	operator+( const Fixed& );
	Fixed	operator-( const Fixed& );
	Fixed	operator*( const Fixed& );
	Fixed	operator/( const Fixed& );

	/* increment/decrement */
	Fixed	&operator++();
	Fixed	&operator--();
	Fixed	operator++( const int );
	Fixed	operator--( const int );

	/* min min max max */	
	static Fixed		&min( Fixed&, Fixed& );
	static const Fixed	&min( const Fixed&, const Fixed& );

	static Fixed		&max( Fixed&, Fixed& );
	static const Fixed	&max( const Fixed&, const Fixed& );
};

std::ostream& operator<<( std::ostream&, const Fixed& );

#endif