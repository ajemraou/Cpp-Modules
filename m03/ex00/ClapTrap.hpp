/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:02:07 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/19 15:02:07 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
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

	void	Display_Info();
};

#endif