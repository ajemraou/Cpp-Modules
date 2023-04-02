/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 17:16:49 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/19 17:16:49 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{

public:
	/* Canonical Form */
	FragTrap();
	FragTrap(const std::string &);
	FragTrap(const FragTrap &);
	FragTrap& operator=(const FragTrap&);
	~FragTrap();

	void	highFivesGuys(void);
};

#endif