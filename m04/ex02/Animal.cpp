/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 21:07:01 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/23 11:13:25 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal Default Constructor" << std::endl;
}

Animal::Animal(const Animal &rhs)
{
	std::cout << "Animal Copy Constructor" << std::endl;
	operator=(rhs);
}

Animal&	Animal::operator=(const Animal &rhs)
{
	std::cout << "Animal Copy Assignment operator" << std::endl;
	this->type = rhs.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor" << std::endl;
}

void	Animal::makeSound() const
{
	std::cout << "Animal Sound !!" << std::endl;
}

void Animal::setType(const std::string typ)
{
	type = typ;
}

std::string Animal::getType() const
{
	return (type);
}