/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 22:52:26 by ajemraou          #+#    #+#             */
/*   Updated: 2023/02/14 14:42:50 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

class Span
{
	typedef std::vector<int>::iterator Iterator;
	std::vector<int>	span;
	size_t				my_size;
public:
	Span();
	Span(unsigned int N);
	Span(const Span&);
	Span& operator=(const Span&);
	~Span();

	void	addNumber( int );

	void	add_range( Iterator begin , Iterator end );
	
	long	shortestSpan( void );
	long	longestSpan( void );

	void	Display_info( void );
};

#endif /* SPAN_HPP */