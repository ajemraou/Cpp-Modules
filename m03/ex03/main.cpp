/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:14:41 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/19 17:14:41 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"


int main()
{
	DiamondTrap per1("Person1");
	DiamondTrap per2("Person2");

	std::cout << std::endl;
	per1.attack("Person2");
	per2.takeDamage(30);

	per1.highFivesGuys();
	per2.guardGate();

	per1.whoAmI();
	per2.whoAmI();
	std::cout << std::endl;

}