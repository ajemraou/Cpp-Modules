/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:23:34 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/19 15:23:34 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

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
	ClapTrap &operator=(const ClapTrap&);
	ClapTrap(std::string);
	~ClapTrap();

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	
	void	Display_Info();
};

#endif