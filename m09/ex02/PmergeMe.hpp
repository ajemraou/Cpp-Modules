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

class PmergeMe
{
	std::vector<int>	myvector;
	std::deque<int>		mydeque;
	
public:
	// PmergeMe(  );
	
	bool	parseArgs(  char **);
	bool	isnum( const std::string );
	void	MergeInsertionSort();
	void	print();
};

#endif /* */