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

RPN::RPN( const std::string input ):input(input)
{
	isoperator = false;
}

RPN::~RPN()
{
	
}

bool	RPN::allowedCharacters( const std::string value )
{
	size_t	size;

	size = value.size();
	for (size_t i = 0; i < size; i++)
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
	
	if ( mystack.empty() == true )
	{
		return false;
	}
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

bool	RPN::PushToStack( const std::string value )
{
	std::string	number;

	size_t	index;
	size_t	size;
	char	ope;

	index = 0;
	size = value.size();
	while ( index < size )
	{
		number = value[index];
		if ( isdigit(value[index]) == true )
		{
			if (isoperator == true && mystack.size() != 1)
			{
				return false;
			}
			mystack.push(atoi(number.c_str()));
			isoperator = false;
		}
		else
		{
			isoperator = true;
			ope = value[index];
			if (Calculate(ope) == false)
			{
				return false;
			}
		}
		index++;
	}
	return (true);
}

void	RPN::CheckErrors()
{
	std::string value;
	
	while ( input >> value )
	{
		if ( allowedCharacters( value ) == false)
		{
			std::cerr << "Error" << std::endl;
			return ;
		}
		if ( PushToStack( value ) == false )
		{
			std::cerr << "Error" << std::endl;
			return ;
		}
	}
	if ( mystack.size() == 1 )
	{
		std::cout << mystack.top() << std::endl;
	}
	else
	{
		std::cerr << "Error" << std::endl;
	}
}

