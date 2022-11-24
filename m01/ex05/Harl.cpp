/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:14:56 by ajemraou          #+#    #+#             */
/*   Updated: 2022/11/24 20:59:41 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	this->functions[0] = &Harl::debug;
	this->functions[1] = &Harl::info;
	this->functions[2] = &Harl::warning;
	this->functions[3] = &Harl::error;
}

void Harl::debug( void )
{
	std::cout << "I love having extra bacon for my";
	std::cout << " 7XL-double-cheese-triple-pickle-specialketchup";
	std::cout << " burger. I really do!" << std::endl;
}

void Harl::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money.";
	std::cout << " You didn't put enough bacon in my burger!";
	std::cout << " If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free.";
	std::cout << " I've been coming for years whereas";
	std::cout << " you started working here since last month." << std::endl;
}

void Harl::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level)
{
	std::string LEVELS[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for(int i = 0; i < 4; i++)
	{
		if (level == LEVELS[i])
			(this->*functions[i])();
	}
}