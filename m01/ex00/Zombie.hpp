/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 21:33:13 by ajemraou          #+#    #+#             */
/*   Updated: 2022/11/05 11:21:55 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
	std::string name;
	void announce( void );
public:
	Zombie(){}
	Zombie(std::string n);
	~Zombie();
	Zombie* newZombie(std::string name);
	void randomChump(std::string name);
};

#endif /* ZOMBIE_*/