/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:22:15 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/25 23:46:37 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice()
{
	std::cout << "Ice Default Constructor" << std::endl;
	this->type = "ice";
}

Ice::Ice( const Ice &rhs ):AMateria(rhs)
{
	std::cout << "Ice Copy Constructor" << std::endl;
	operator=(rhs);
}

Ice& Ice::operator=( const Ice &rhs )
{
	std::cout << "Ice Copy Assignment operator" << std::endl;
	type = rhs.type;
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice destructor" << std::endl;
}

void Ice::use(ICharacter& target)
{
	std::cout << "Ice : * shoots an ice bolt at ";
	std::cout << target.getName();
	std::cout << " *" << std::endl;;
}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}

