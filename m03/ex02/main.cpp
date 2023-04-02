/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:01:31 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/19 17:01:31 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	FragTrap dog("Dog");
	ScavTrap cat("Cat");

	std::cout << std::endl;
	cat.Display_Info();
	dog.Display_Info();
	std::cout << std::endl;

	cat.attack("Dog");
	dog.takeDamage(30);
	dog.highFivesGuys();
	cat.guardGate();
	dog.beRepaired(50);
	dog.attack("Cat");
	dog.attack("Cat");

	cat.Display_Info();
	dog.Display_Info();
	std::cout << std::endl;

}
