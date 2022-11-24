/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:01:19 by ajemraou          #+#    #+#             */
/*   Updated: 2022/11/22 10:29:50 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &weapon):name(name), weapon(weapon)
{
	
}

HumanA::~HumanA()
{
	
}

void    HumanA::attack()
{
	std::cout << name;
	std::cout << " attacks with their ";
	std::cout << weapon.getType() << std::endl;
}