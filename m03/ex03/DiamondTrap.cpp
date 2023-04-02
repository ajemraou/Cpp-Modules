/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:29:32 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/19 15:29:32 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap Default Constructor" << std::endl;
	this->Hit_point = 100;
	this->Energy_point = 50;
	this->Attack_damage = 30;
}

DiamondTrap::DiamondTrap(const std::string&	name):ClapTrap(name + "_clap_name"), Name(name)
{
	std::cout << "DiamondTrap Constructor" << std::endl;
	this->Hit_point = 100;
	this->Energy_point = 50;
	this->Attack_damage = 30;
}

DiamondTrap::DiamondTrap( const DiamondTrap& rhs )
{
	std::cout << "DiamondTrap Copy Constructor" << std::endl;
	operator=(rhs);
}

DiamondTrap& DiamondTrap::operator=( const DiamondTrap& rhs )
{
	std::cout << "DiamondTrap Copy Assignment operator" << std::endl;
	Name = rhs.Name;
	Hit_point = rhs.Hit_point;
	Attack_damage = rhs.Attack_damage;
	Energy_point = rhs.Energy_point;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << " ╔══════════════════════════════════════════════════════╗ " << std::endl;
	std::cout << " ║               DiamondTrap::whoAmI();                 ║ " << std::endl;
	std::cout << " ╠═══════════════════════╦══════════════════════════════╣ " << std::endl;
	std::cout << " ║ Attribute name        ║          Value               ║ " << std::endl;
	std::cout << " ╠═══════════════════════╬══════════════════════════════╣ " << std::endl;
	std::cout << " ║ DiamondTrap Name      ║  ";
	std::cout << Name;
	std::cout << std::setw(32 - Name.size());
	std::cout << " ║ " << std::endl;;
	std::cout << " ║ ClapTrap Name         ║  ";
	std::cout << getName();
	std::cout << std::setw(32 - getName().size());
	std::cout << " ║ " << std::endl;
	std::cout << " ║ ClapTrap Hit_point    ║  ";
	std::cout << getHit_point();
	std::cout << std::setw(29);
	if (getHit_point() < 100)
		std::cout << std::setw(30);
	std::cout << " ║ " << std::endl;
	std::cout << " ║ ClapTrap Energy_point ║  ";
	std::cout << getEnergy_point();
	std::cout << std::setw(30);
	std::cout << " ║ " << std::endl;
	std::cout << " ║ ClapTrap Attack_damage║  ";
	std::cout << getAttack_damage();
	std::cout << std::setw(30);
	std::cout << " ║ " << std::endl;
	std::cout << " ╚═══════════════════════╩══════════════════════════════╝ " << std::endl;
}
