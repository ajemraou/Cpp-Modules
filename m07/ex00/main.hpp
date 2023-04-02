/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:47:10 by ajemraou          #+#    #+#             */
/*   Updated: 2023/02/04 14:20:53 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>

template<typename T>
void	swap(T &a, T &b)
{
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template<typename T>
T&	min(T &a, T &b)
{
	if (a < b)
		return a;
	return b;
}

template<typename T>
T&	max(T &a, T &b)
{
	if  (a > b)
		return a;
	return b;
}

#endif /* MAIN_HPP */