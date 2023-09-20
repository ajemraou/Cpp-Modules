/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:37:37 by ajemraou          #+#    #+#             */
/*   Updated: 2023/09/18 17:04:14 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main( int ac, char **av )
{

	if (ac != 1)
	{
		PmergeMe obj;
		obj.parseArgs(av);
		
		obj.MergeInsertionSort();
	}
}