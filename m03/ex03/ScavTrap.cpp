/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:18:54 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/19 17:18:54 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default Constructor" << std::endl;
	this->Hit_point = 100;
	this->Energy_point = 50;
	this->Attack_damage = 20;
}

ScavTrap::ScavTrap(const std::string &name):ClapTrap(name)
{
	std::cout << "ScavTrap Constructor" << std::endl;
	this->Hit_point = 100;
	this->Energy_point = 50;
	this->Attack_damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &ob)
{
	std::cout << "ScavTrap Copy Constructor" << std::endl;
	operator=(ob);
}

ScavTrap& ScavTrap::operator=(const ScavTrap &ob)
{
	std::cout << "ScavTrap Copy Assignment operator" << std::endl;
	this->Name = ob.Name;
	this->Hit_point = ob.Hit_point;
	this->Energy_point = ob.Energy_point;
	this->Attack_damage = ob.Attack_damage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (!Energy_point || !Hit_point)
		return ;
	std::cout << "ScavTrap " << Name;
	std::cout << " attacks "<< target;
	std::cout << ", causing " << Attack_damage;
	std::cout << " point of damage!" << std::endl;
	Energy_point--;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now ";
	std::cout << "in Gate keeper mode" << std::endl;
}
