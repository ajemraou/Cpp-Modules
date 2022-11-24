/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HarlFilter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:38:40 by ajemraou          #+#    #+#             */
/*   Updated: 2022/11/24 16:14:00 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HarlFilter.hpp"

HarlFilter::HarlFilter()
{
	
}

void HarlFilter::debug( void )
{
	std::cout << "I love having extra bacon for my";
	std::cout << " 7XL-double-cheese-triple-pickle-specialketchup";
	std::cout << " burger. I really do!" << std::endl;
}

void HarlFilter::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << " You didn't put enough bacon in my burger!";
	std::cout << " If you did, I wouldn't be asking for more!" << std::endl;
}

void HarlFilter::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I've been coming for years whereas";
	std::cout << " you started working here since last month." << std::endl;
}

void HarlFilter::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void HarlFilter::complain( std::string level)
{
	int cases;
	
	cases = 0;
	std::string LEVELS[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (; LEVELS[cases] != level && cases < 4; cases++);
	cases++;
	switch (cases)
	{
		case 1:
			std::cout << "[ " << LEVELS[cases - 1]<< " ]" << std::endl;
			cases++;
			debug();
			std::cout << std::endl;
		case 2:
			std::cout << "[ " << LEVELS[cases - 1]<< " ]" << std::endl;
			cases++;
			info();
			std::cout << std::endl;
		case 3:
			std::cout << "[ " << LEVELS[cases - 1]<< " ]" << std::endl;
			cases++;
			warning();
			std::cout << std::endl;
		case 4:
			std::cout << "[ " << LEVELS[cases - 1]<< " ]" << std::endl;
			cases++;
			error();
			std::cout << std::endl;
		default:
			break;
	}

}