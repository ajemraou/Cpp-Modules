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

PmergeMe::PmergeMe(  )
{
	paired = false;
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

template <typename T>
void	PmergeMe::printMessage( const std::string message, T bg, T ed )
{
	std::cout << message;
	while ( bg != ed )
	{
		std::cout << *bg << " ";
		bg++;
	}
	std::cout << std::endl;
}

template<typename iter>
void	PmergeMe::GroupTheElements( iter begin, iter end )
{
	int	number;

	number = 0;
	while ( begin != end )
	{
		if ( number % 2 == 0 )
		{
			if ( begin + 1 == end )
			{
				rest = *begin;
				paired = true;
			}
			else
			{
				Pairs.push_back(std::make_pair(*begin, *(begin + 1)));
			}
		}
		number++;
		begin++;
	}
}

void	PmergeMe::InsertAtTheStartV(  )
{
	std::vector<std::pair<int, int> >::iterator start = Pairs.begin();
	std::vector<std::pair<int, int> >::iterator end = Pairs.end();
	while ( start != end )
	{
		myvector.push_back(start->first);
		start++;
	}
}

void	PmergeMe::InsertAtTheStartD(  )
{
	std::vector<std::pair<int, int> >::iterator start = Pairs.begin();
	std::vector<std::pair<int, int> >::iterator end = Pairs.end();
	while ( start != end )
	{
		mydeque.push_back(start->first);
		start++;
	}
}

void	PmergeMe::SearchAndReplaceV( )
{

	std::vector<std::pair<int, int> >::iterator start = Pairs.begin();
	std::vector<std::pair<int, int> >::iterator end = Pairs.end();
	
	std::vector<int>::iterator result;

	while ( start != end )
	{
		result = std::upper_bound(myvector.begin(), myvector.end(), start->second);
		myvector.insert(result, start->second);
		start++;
	}
	if ( paired == true )
	{
		result = std::upper_bound(myvector.begin(), myvector.end(), rest);
		myvector.insert(result, rest);
	}
}

void	PmergeMe::SearchAndReplaceD( )
{

	std::vector<std::pair<int, int> >::iterator start = Pairs.begin();
	std::vector<std::pair<int, int> >::iterator end = Pairs.end();
	
	std::deque<int>::iterator result;

	while ( start != end )
	{
		result = std::upper_bound(mydeque.begin(), mydeque.end(), start->second);
		mydeque.insert(result, start->second);
		start++;
	}
	if ( paired == true )
	{
		result = std::upper_bound(mydeque.begin(), mydeque.end(), rest);
		mydeque.insert(result, rest);
	}
}

void	PmergeMe::SortVecor()
{
	printMessage( "Before: ", myvector.begin(), myvector.end());
	start = std::clock();
	GroupTheElements(myvector.begin(), myvector.end());
	std::sort(Pairs.begin(), Pairs.end());
	myvector.clear();
	InsertAtTheStartV( );
	SearchAndReplaceV( );
	end = std::clock();
	printMessage( "After: ", myvector.begin(), myvector.end());
	std::cout << "Time to process a range of " << myvector.size() << " elements with std::vector : " << std::setprecision(4) << 1000.00 * (end - start) / CLOCKS_PER_SEC << " ms" << std::endl; 
}

void	PmergeMe::SortDeque()
{
	/*printMessage( "Before: ", mydeque.begin(), mydeque.end());*/
	start = std::clock();
	GroupTheElements(mydeque.begin(), mydeque.end());
	std::sort(Pairs.begin(), Pairs.end());
	mydeque.clear();
	InsertAtTheStartD( );
	SearchAndReplaceD( );
	end = std::clock();
	/*printMessage( "After: ", mydeque.begin(), mydeque.end());*/
	std::cout << "Time to process a range of " << mydeque.size() << " elements with std::deque : " << 1000.00 * (end - start) / CLOCKS_PER_SEC << " ms" << std::endl;
}

void	PmergeMe::MergeInsertionSort()
{
	SortVecor();
	SortDeque();
}
