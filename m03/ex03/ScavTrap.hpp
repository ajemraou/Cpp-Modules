/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:18:38 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/19 17:18:38 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
public:
	/* Canonical Form */
	ScavTrap();
	ScavTrap(const std::string&);
	ScavTrap(const ScavTrap&);
	ScavTrap& operator=(const ScavTrap&);
	~ScavTrap();

	void	guardGate();
	void	attack(const std::string &target);
};

#endif