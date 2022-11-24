/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:36:28 by ajemraou          #+#    #+#             */
/*   Updated: 2022/11/22 10:19:23 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon{
	std::string type;
public:
	const std::string &getType();
	void	setType(std::string);
	Weapon(std::string type);
	~Weapon();
};

#endif /* WEAPON_HPP */