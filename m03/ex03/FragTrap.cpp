/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:17:59 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/19 17:17:59 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Default Constructor" << std::endl;
	this->Hit_point = 100;
	this->Energy_point = 100;
	this->Attack_damage = 30;
}

FragTrap::FragTrap(const std::string &name):ClapTrap(name)
{
	std::cout << "FragTrap Constructor" << std::endl;
	this->Hit_point = 100;
	this->Energy_point = 100;
	this->Attack_damage = 30;
}

FragTrap::FragTrap(const FragTrap &ob)
{
	std::cout << "FragTrap Copy Constructor" << std::endl;
	operator=(ob);
}

FragTrap& FragTrap::operator=(const FragTrap &ob)
{
	std::cout << "FragTrap Copy Assignment operator" << std::endl;
	this->Name = ob.Name;
	this->Attack_damage = ob.Attack_damage;
	this->Hit_point = ob.Hit_point;
	this->Energy_point = ob.Energy_point;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap highFivesGuys" << std::endl;
}
