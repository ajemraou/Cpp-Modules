#include "Character.hpp"
#include "Character.hpp"
#include "Character.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:47:29 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/23 13:34:24 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Character Default Constructor" << std::endl;
	for (int i = 0; i < 4; i++){
		materias[i] = NULL;
		materias_status[i] = 0;
	}
}

Character::Character(const std::string name):name(name)
{
	std::cout << "Character Constructor" << std::endl;
}

Character::Character(const Character &rhs)
{
	std::cout << "Character Copy Constructor" << std::endl;
	for (int i = 0; i < 4; i++){
		materias[i] = NULL;
		materias_status[i] = 0;
	}
	operator=(rhs);
}

Character& Character::operator=(const Character &rhs)
{
	name = rhs.name;
	for (int i = 0; i < 4; i++){
		if (materias_status[i])
		{
			delete materias[i];
			materias[i] = NULL;
		}
		if (rhs.materias_status[i])
			materias[i] = rhs.materias[i]->clone();
	}
	for(int i = 0; i < 4; i++)
		materias_status[i] = rhs.materias_status[i];
	return (*this);
}

Character::~Character()
{
	std::cout << "Character Default Destructor" << std::endl;
	for(int i = 0; i < 4; i++){
		if (materias_status[i])
			delete materias[i];
	}
}

std::string const &Character::getName() const
{
	return (name);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++){
		if (materias_status[i] == 2)
		{
			delete materias[i];
			materias_status[i] = 0;
			materias[i] = NULL;
		}
	}
	for (int i = 0; i < 4; i++){
		if (!materias_status[i])
		{
			materias[i] = m->clone();
		 	materias_status[i] = 1;
			std::cout << "Equiped : " << i << std::endl;
			break ;
		}
	}
}

void	Character::unequip(int idx)
{
	materias_status[idx] = 2;
	std::cout << "Unequiped : " << idx << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	materias[idx]->use(target);
}
