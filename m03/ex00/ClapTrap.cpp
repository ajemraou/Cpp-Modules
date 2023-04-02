/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:02:00 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/19 15:02:00 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():Hit_point(10), Energy_point(10), Attack_damage(0)
{
	std::cout << "ClapTrap Default Constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name):Name(name), Hit_point(10), Energy_point(10), Attack_damage(0)
{
	std::cout << "ClapTrap Constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ob)
{
	std::cout << "ClapTrap Copy Constructor" << std::endl;
	operator=(ob);
}

ClapTrap& ClapTrap::operator=(const ClapTrap &ob)
{
	std::cout << "ClapTrap Copy Assignment operator" << std::endl;
	this->Name = ob.Name;
	this->Hit_point = ob.Hit_point;
	this->Energy_point = ob.Energy_point;
	this->Attack_damage = ob.Attack_damage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (!Energy_point || !Hit_point)
		return ;
	std::cout << "ClapTrap " << Name;
	std::cout << " attacks "<< target;
	std::cout << ", causing " << Attack_damage;
	std::cout << " point of damage!" << std::endl;
	Energy_point--;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!Energy_point || !Hit_point)
		return ;
	std::cout << "ClapTrap " << Name;
	std::cout << " beRepaired";
	std::cout << ", get " << amount;
	std::cout << " hit points back" << std::endl;
	Hit_point += amount;
	Energy_point--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!Energy_point || !Hit_point)
		return ;
	std::cout << "ClapTrap " << Name;
	std::cout << " TakeDamage";
	std::cout << ", Losing " << amount;
	std::cout << " points of damage!" << std::endl;
	if (amount > Hit_point)
		Hit_point = 0;
	else
		Hit_point -= amount;
}

void	ClapTrap::Display_Info()
{
	std::cout << "--------------------------------" << std::endl;
	std::cout << "Name : " << Name << std::endl;
	std::cout << "Hit_point : " << Hit_point <<std::endl;
	std::cout << "Energy_point : " << Energy_point << std::endl;
	std::cout << "Attack_Damage : " << Attack_damage << std::endl;
	std::cout << "--------------------------------" << std::endl;
}