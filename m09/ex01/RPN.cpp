/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 22:20:47 by ajemraou          #+#    #+#             */
/*   Updated: 2023/09/16 20:47:47 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"
#include <cctype>
#include <cstddef>

RPN::RPN( const std::string input ):input(input)
{
	operatorCounter = 0;
	numberCounter = 0;
}

RPN::~RPN()
{
	
}

bool	RPN::allowedCharacters( const std::string value )
{
	size_t	size;

	size = value.size();
	for (int i = 0; i < size; i++)
	{
		if ( isdigit(value[i]) == false )
		{
			if (value[i] != '-' && value[i] != '+' && 
				value[i] != '*' && value[i] != '/')
			{
				return (false);
			}
		}
	}
	return (true);
}

bool	RPN::Calculate( int c )
{
	int	value;

	if ( c == '-' )
	{
		value = mystack.top();
		mystack.pop();
		mystack.top() -= value;
	}
	else if ( c == '+' )
	{
		value = mystack.top();
		mystack.pop();
		mystack.top() += value;
	}
	else if ( c == '*' )
	{
		value = mystack.top();
		mystack.pop();
		mystack.top() *= value;
	}
	else if ( c == '/')
	{
		value = mystack.top();
		if ( value == 0)
		{
			return (false);
		}
		mystack.pop();
		mystack.top() /= value;
	}
	return (true);
}

bool	RPN::validSequence( const std::string value )
{
	char	c;

	c = value[0];
	if ( isdigit(c) == true )
	{
		mystack.push(atoi(value.c_str()));
	}
	else
	{
		return (Calculate( c ));
	}
	return (true);
}

void	RPN::CheckErrors()
{
	std::string value;
	
	while ( input >> value )
	{
		if (allowedCharacters( value ) == false)
		{
			std::cerr << "Error" << std::endl;
			return ;
		}
		if ( validSequence( value )  == false )
		{
			std::cerr << "Error" << std::endl;
			return ;
		}
	}
	if ( mystack.size() != 1 )
	{
		std::cerr << "Error" << std::endl;
	}
	else
	{
		std::cout << mystack.top() << std::endl;
	}
}

