/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:15:32 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/19 17:15:32 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <iomanip>

class ClapTrap{
protected:
	std::string		Name;
	unsigned int	Hit_point;
	unsigned int	Energy_point;
	unsigned int	Attack_damage;

public:
	/* Canonical Form */
	ClapTrap();
	ClapTrap(const ClapTrap&);
	ClapTrap(std::string);
	~ClapTrap();
	ClapTrap	&operator=(const ClapTrap&);

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	std::string	getName() const;
	void	setName(const std::string);

	unsigned int	getHit_point() const;
	void	setHit_point(unsigned int);

	unsigned int	getEnergy_point() const;
	void	setEnergy_point(unsigned int);

	unsigned int	getAttack_damage() const;
	void	setAttack_damage(unsigned int);
};

#endif