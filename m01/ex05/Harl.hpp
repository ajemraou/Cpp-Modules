/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:14:58 by ajemraou          #+#    #+#             */
/*   Updated: 2022/11/24 15:22:03 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_CPP
#define HARL_CPP

#include <iostream>

class Harl{
	typedef void (Harl::*pmf)(void);
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	pmf functions[4];
public:
    Harl();
	void complain( std::string );
};

#endif /* HARL */