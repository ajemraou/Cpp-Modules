/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:38:04 by ajemraou          #+#    #+#             */
/*   Updated: 2023/09/18 17:11:49 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <cctype>
#include <deque>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <iterator>
#include <utility>
#include <sys/time.h>
#include <iomanip>

class PmergeMe
{
	std::vector<int>	myvector;
	std::deque<int>		mydeque;
	/* ------------------------ */
	std::vector<std::pair<int, int> >	vectorPairs;
	std::deque<std::pair<int, int> >	dequePairs;
	/* -------------------------*/
	std::pair<int, int>	pairs;

	int					rest;
	bool				paired;

	long				start;
	long				end;
public:
	PmergeMe(  );
	
	bool	parseArgs(  char **);
	bool	isnum( const std::string );

	void	MergeInsertionSort();
	
	template<typename iter>
	void	GroupTheElements( iter, iter );
	

	void	InsertAtTheStartV(  );
	void	SearchAndReplaceV( );

	void	InsertAtTheStartD(  );
	void	SearchAndReplaceD( );

	template <typename T>
	void	printMessage( const std::string, T, T );
	void	print_pairs();

	void	SortVecor();
	void	SortDeque();

};

#endif /* */