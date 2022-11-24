/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:22:16 by ajemraou          #+#    #+#             */
/*   Updated: 2022/11/24 17:29:07 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"


HumanB::HumanB(std::string name):name(name), weapon(NULL)
{
	
}

HumanB::~HumanB()
{
	
}

void    HumanB::attack()
{
	if (!this->weapon)
		return ;
	std::cout << name;
	std::cout << " attacks with their ";
		std::cout << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}  