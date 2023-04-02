/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:02:13 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/19 15:02:13 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	ichi("Ichigo");
	ClapTrap	Ulquio("Ulquiorra");

	std::cout << std::endl;
	ichi.Display_Info();
	std::cout << std::endl;

	ichi.attack("Ulquiorra");
	Ulquio.takeDamage(0);
	Ulquio.beRepaired(5);
	
	std::cout << std::endl;
	
	Ulquio.attack("Ichigo");
	ichi.takeDamage(0);
	ichi.beRepaired(15);

	ichi.Display_Info();
	Ulquio.Display_Info();

	std::cout << std::endl;
}