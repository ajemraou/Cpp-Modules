/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 14:07:14 by ajemraou          #+#    #+#             */
/*   Updated: 2023/02/06 14:03:57 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <array>

template<class T>
class Array{
	unsigned int	my_size;
	T				*my_array;
public:
	Array():my_size(0), my_array(new T[my_size]){/* */}
	Array(unsigned int n):my_size(n), my_array(new T [my_size])
	{
		for (unsigned int i = 0; i < my_size; i++)
			my_array[i] = i;
	}
	Array(Array &rhs):my_size(rhs.my_size), my_array(new T [my_size]){/* */}
	Array& operator=(Array &rhs)
	{
		delete [] my_array;
		my_size = rhs.my_size;
		my_array = new T[my_size];
		for (unsigned int i = 0; i < my_size; i++)
			my_array[i] = rhs.my_array[i];
		return (*this);
	}
	T	&operator[](int index)
	{
		if (index < 0 || index >= static_cast<int>(my_size))
			throw std::out_of_range("Sorry, index is out of range");
		return (my_array[index]);
	}
	const T	&operator[](int index) const
	{
		if (index < 0 || index >= static_cast<int>(my_size))
			throw std::out_of_range("Sorry, index is out of range");
		return (my_array[index]);
	}
	unsigned int size() const
	{
		return (my_size);
	}
	~Array()
	{
		delete [] my_array;
	}
};

#endif /* ARRAY_HPP */