/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:03:02 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/19 15:03:02 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap Ace("Ace");
	ScavTrap Black("BlackBeard");

	std::cout << std::endl;
	Ace.Display_Info();
	std::cout << std::endl;

	Ace.attack("BlackBeard");
	Ace.guardGate();

	Black.takeDamage(20);
	Black.guardGate();
	Black.beRepaired(20);

	Black.attack("Ace");
	Black.attack("Ace");
	
	Ace.takeDamage(20);
	Ace.takeDamage(20);

	Ace.Display_Info();
	Black.Display_Info();
	std::cout << std::endl;

}
