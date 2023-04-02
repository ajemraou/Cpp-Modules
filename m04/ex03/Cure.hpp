/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:22:28 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/23 21:06:23 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria {
	public:
	/* orthodox Canonical Class */
	Cure();
	Cure( const Cure &);
	Cure& operator=( const Cure& );
	~Cure();
	
	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif	/* CURE_HPP */