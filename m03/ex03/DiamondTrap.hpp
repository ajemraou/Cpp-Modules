/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:28:41 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/19 15:28:41 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{
	std::string Name;
public:
	/* Canonical Form */
	DiamondTrap();
	DiamondTrap( const std::string& );
	DiamondTrap( const DiamondTrap& );
	DiamondTrap	&operator=( const DiamondTrap& );
	~DiamondTrap();

	void whoAmI();
};

#endif