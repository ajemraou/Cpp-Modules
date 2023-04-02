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


std::string	ClapTrap::getName() const
{
	return (Name);
}

void ClapTrap::setName(const std::string name)
{
	Name = name;
}

unsigned int ClapTrap::getHit_point() const
{
	return (Hit_point);
}

void ClapTrap::setHit_point(unsigned int Hp)
{
	Hit_point = Hp;
}

unsigned int ClapTrap::getEnergy_point() const
{
	return (Energy_point);
}

void ClapTrap::setEnergy_point(unsigned int Eng)
{
	Energy_point = Eng;
}

unsigned int ClapTrap::getAttack_damage() const
{
	return (Attack_damage);
}
void ClapTrap::setAttack_damage(unsigned int dmg)
{
	Attack_damage = dmg;
}