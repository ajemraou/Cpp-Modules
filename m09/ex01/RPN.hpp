/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 22:20:44 by ajemraou          #+#    #+#             */
/*   Updated: 2023/09/15 15:56:58 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <cstddef>
#include <iostream>
#include <sstream>
#include <cctype>
#include <stack>
#include <cstdlib>

class RPN
{
	std::stack<unsigned int>	mystack;
	
	std::stringstream			input;
	size_t						operatorCounter;
	size_t						numberCounter;
public:
	RPN( const std::string );
	~RPN();

	void	CheckErrors();
	bool	allowedCharacters( const std::string );
	bool	validSequence( const std::string );
	bool	Calculate( int  );
};

#endif /* */
