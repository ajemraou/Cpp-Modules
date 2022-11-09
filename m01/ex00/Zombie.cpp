/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:33:11 by ajemraou          #+#    #+#             */
/*   Updated: 2022/11/05 11:19:49 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string n):name(n)
{
	announce();
}

void Zombie::announce()
{
	std::cout << name;
	std::cout << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie..." << name << "Destroyed !!!" << std::endl;
}

Zombie* Zombie::newZombie(std::string name)
{
	Zombie *zombie = new Zombie(name);
	return (zombie);
}

void Zombie::randomChump(std::string name)
{
	Zombie zombie(name);
}
