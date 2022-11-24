/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:40:17 by ajemraou          #+#    #+#             */
/*   Updated: 2022/11/22 10:19:45 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type):type(type)
{
	
}

Weapon::~Weapon()
{
	
}

const std::string &Weapon::getType()
{
	return (this->type);
}

void Weapon::setType(const std::string type)
{
	this->type = type;	
}