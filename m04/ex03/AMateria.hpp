/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:17:06 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/26 17:55:39 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>

class ICharacter;

class AMateria
{
protected:
	std::string type;

public:
	/* orthodox Canonical Class */
	AMateria();
	AMateria( const std::string &type );
	AMateria(const AMateria&);
	AMateria& operator=(const AMateria&);
	virtual ~AMateria();
	
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0; //pure virtual function
	virtual void use(ICharacter& target);
};

#endif /* AMATERIA_HPP */