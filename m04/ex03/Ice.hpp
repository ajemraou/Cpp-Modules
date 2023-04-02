/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:22:13 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/23 21:06:28 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria{
	public:
	/* orthodox Canonical Class */
	Ice();
	Ice( const Ice &);
	Ice& operator=( const Ice& );
	~Ice();
	

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif /* ICE_HPP */