/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 19:00:02 by ajemraou          #+#    #+#             */
/*   Updated: 2023/02/13 15:15:18 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

template <typename T>
bool	easyfind( const T& container, int i )
{
	typename T::const_iterator it = std::find(container.begin(), container.end(), i);
	if (it == container.end())
		throw std::runtime_error("element not found!");
	return (true);
}

#endif /* easyfind! */