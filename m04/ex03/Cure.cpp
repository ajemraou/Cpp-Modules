/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:22:38 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/25 23:46:17 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure()
{
	std::cout << "Cure Default Constructor" << std::endl;
	this->type = "cure";
}

Cure::Cure( const Cure& rhs ):AMateria(rhs)
{
	std::cout << "Cure Copy Constructor" << std::endl;	
	operator=(rhs);
}

Cure& Cure::operator=( const Cure &rhs )
{
	std::cout << "Cure Copy Assignement operator" << std::endl;
	type = rhs.type;
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure Destructor" << std::endl;
}

void Cure::use(ICharacter& target)
{
	std::cout << "Cure: * heals ";
	std::cout << target.getName();
	std::cout << " wounds *" << std::endl;
}

AMateria* Cure::clone() const
{
	return new Cure();
}
