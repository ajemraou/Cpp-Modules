/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:17:09 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/26 20:17:29 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria Default Constructor" << std::endl;
}

AMateria::AMateria( const std::string &type )
{
	std::cout << "AMateria Constructor" << std::endl;
	this->type = type;
}

AMateria::AMateria( const AMateria &rhs)
{
	std::cout << "AMateria Copy Constructor" << std::endl;
	operator=(rhs);
}

AMateria& AMateria::operator=(const AMateria &rhs )
{	(void)rhs;
	std::cout << "AMateria Copy Assignment operator" << std::endl;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor" << std::endl;
}

std::string const & AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "* AMateria Use ";
	std::cout << target.getName();
	std::cout <<  " *" << std::endl;
}
