/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:36:22 by ajemraou          #+#    #+#             */
/*   Updated: 2022/11/22 10:30:07 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HumanA_HPP
#define HumanA_HPP

#include "Weapon.hpp"

class HumanA{
	std::string name;
	Weapon	&weapon;
public:
	~HumanA();
	HumanA(std::string, Weapon&);
	void	attack();
};

#endif /* HumanA */