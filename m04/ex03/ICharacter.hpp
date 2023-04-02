/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:30:53 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/26 18:24:49 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include "AMateria.hpp"

class ICharacter
{
public:
	virtual	~ICharacter() {}
	virtual	std::string const & getName() const = 0;
	virtual	void equip(AMateria* m) = 0;
	virtual	void unequip(int idx) = 0;
	virtual	void use(int idx, ICharacter& target) = 0;
};

#endif /* CHARACTER */