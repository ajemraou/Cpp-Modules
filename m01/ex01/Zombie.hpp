/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:01:46 by ajemraou          #+#    #+#             */
/*   Updated: 2022/11/22 09:56:53 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>


class Zombie{
	std::string name;
public:
	Zombie();
	~Zombie();
	void	set_name(std::string);
	void 	announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif /**/