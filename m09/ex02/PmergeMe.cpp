/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:38:01 by ajemraou          #+#    #+#             */
/*   Updated: 2023/09/18 17:12:20 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool	PmergeMe::isnum( const std::string arg )
{
	for ( int i = 0; arg[i]; i++ )
	{
		if ( i == 0 && (arg[i] == '-' || arg[i] == '+') )
		{
			continue ;
		}
		else if (isdigit(arg[i]) == false )
		{
			return (false);
		}
	}
	return (true);
}

bool	PmergeMe::parseArgs(  char **args )
{
	int number;

	for (int i = 1; args[i]; i++)
	{
		if (isnum(args[i]) == true)
		{
			number = atoi(args[i]);
			myvector.push_back(number);
			mydeque.push_back(number);
		}
		else
		{
			return (false);
		}
	}
	return (true);
}

void	PmergeMe::print()
{
	for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); it++)
	{
		std::cout << "v : " << *(it.base()) << std::endl;
	}
	std::cout << "--------------------" << std::endl;
	for(std::deque<int>::iterator it = mydeque.begin(); it != mydeque.end(); it++)
	{
		std::cout << "q : " << *(it._M_cur) << std::endl;
	}
}

void	PmergeMe::MergeInsertionSort()
{
	
}
