/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:33:16 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/24 16:38:53 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal Default Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &rhs)
{
	std::cout << "WrongAnimal Copy Constructor" << std::endl;
	operator=(rhs);
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal &rhs)
{
	std::cout << "WrongAnimal Copy Assignment operator" << std::endl;
	this->type = rhs.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor" << std::endl;
}

void	WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal Sound !!" << std::endl;
}

void WrongAnimal::setType(const std::string typ)
{
	type = typ;
}

std::string WrongAnimal::getType() const
{
	return (type);
}
