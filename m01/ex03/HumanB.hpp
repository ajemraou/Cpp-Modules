/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:36:25 by ajemraou          #+#    #+#             */
/*   Updated: 2022/11/22 10:27:39 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanB_HPP
#define HumanB_HPP

#include "Weapon.hpp"

class HumanB{
	std::string name;
	Weapon	*weapon;
public:
	~HumanB();
	HumanB(std::string);
	void	attack();
	void	setWeapon(Weapon &weapon);
};

#endif /* HumanB */