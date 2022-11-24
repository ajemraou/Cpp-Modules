/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:01:44 by ajemraou          #+#    #+#             */
/*   Updated: 2022/11/22 09:49:09 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	
}

Zombie::~Zombie()
{
	std::cout << "Zombie " << name << " Destroyed !!!" << std::endl; 
}

void Zombie::announce( void )
{
	std::cout << name;
	std::cout << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}