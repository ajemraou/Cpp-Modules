/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 21:23:40 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/18 21:23:40 by ajemraou         ###   ########.fr       */
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
	Fixed();
	Fixed( const int );
	Fixed( const float );
	Fixed( const Fixed& );
	~Fixed();
	Fixed	&operator=( const Fixed& );
	
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	float	toFloat( void ) const;
	int		toInt( void ) const;
};

std::ostream& operator<<(std::ostream&, const Fixed&);

#endif