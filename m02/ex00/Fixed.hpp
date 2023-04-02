/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 13:14:40 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/18 13:14:40 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
	int value;
	static const int fractional_bits = 8;
public:
	Fixed();
	Fixed( Fixed& );
	Fixed &operator=( Fixed& );
	~Fixed();
	int	getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif