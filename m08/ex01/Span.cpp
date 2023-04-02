/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 22:55:08 by ajemraou          #+#    #+#             */
/*   Updated: 2023/02/14 13:42:40 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span():span(), my_size(0)
{

}

Span::Span(unsigned int N):span(), my_size(N)
{
	
}

Span::Span(const Span &rhs):span(rhs.span), my_size(rhs.my_size)
{

}

Span& Span::operator=(const Span &rhs)
{
	span = rhs.span;
	my_size = rhs.my_size;
	return (*this);
}

Span::~Span()
{
}

void	Span::addNumber( int Number )
{
	if (my_size == 0)
		throw std::logic_error("Span is empty!");
	if (span.size() > my_size)
		throw std::logic_error("Span is Full!");
	span.push_back(Number);
}

long	Span::shortestSpan( void )
{
	if (my_size == 0 || span.size() < 2)
		throw std::logic_error("Span is empty!");
	if (span.size() > my_size)
		throw std::logic_error("Span is Full!");
		
	std::vector<int> my_vector(span);
	std::sort(my_vector.begin(), my_vector.end());


	Iterator it = my_vector.begin();
	Iterator end = my_vector.end();
	long first = *it;
	long last = *(it + 1);
	long s_span = labs(first - last);
	for (;it + 1 != end; it++)
	{
		first = *it;
		last = *(it + 1);
		if (labs(first - last) < s_span)
			s_span = labs(first - last);
	}
	return s_span;
}

long Span::longestSpan( void )
{
	if (my_size == 0 || span.size() < 2)
		throw std::logic_error("Span is empty!");
	if (span.size() > my_size)
		throw std::logic_error("Span is Full!");
	long	max_value = *std::max_element(span.begin(), span.end());
	long	min_value = *std::min_element(span.begin(), span.end());
	long	result = labs(max_value - min_value);
	return (result);
}

void	Span::add_range( Iterator begin , Iterator end )
{
	if (my_size == 0)
		throw std::logic_error("Span is empty!");
	if (span.size() > my_size)
		throw std::logic_error("Span is Full!");
	Iterator it = begin;
	for (;it != end; it++)
	{
		if (span.size() > my_size)
			throw std::logic_error("Span is Full!");
		span.push_back(*it);
	}
}

void	Span::Display_info( void )
{
	std::cout << "[ Capacity ] : " << my_size << std::endl;
	std::cout << "[   Size   ] : " <<  span.size() << std::endl;
	for (size_t i = 0; i < span.size(); i++)
		std::cout << "[" << i << "] : " << span[i] << std::endl;
	std::cout << "shortestSpan : " << shortestSpan() << std::endl;
	std::cout << "longestSpan  : " << longestSpan() << std::endl;
}
