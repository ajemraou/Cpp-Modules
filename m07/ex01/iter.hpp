/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:53:06 by ajemraou          #+#    #+#             */
/*   Updated: 2023/02/08 14:18:42 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ITER_HPP
#define	ITER_HPP

#include <iostream>

template<typename T>
void	print_array(T element)
{
	std::cout << element << std::endl;
}

template<typename T, typename T2>
void	iter(T *array, T2 size, void(*function)(const T&))
{
	for(int i = 0; i < size; i++)
	{
		std::cout << "Array [" << i << "] : ";
		function(array[i]);
	}
}

#endif /* !ITER  */