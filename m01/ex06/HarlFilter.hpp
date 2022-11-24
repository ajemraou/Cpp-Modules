/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlFilter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:32:20 by ajemraou          #+#    #+#             */
/*   Updated: 2022/11/24 15:48:42 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARLFILTER_HPP
#define HARLFILTER_HPP

#include <iostream>

class HarlFilter{
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
public:
    HarlFilter();
	void complain( std::string );
};

#endif /* HARL */