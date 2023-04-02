/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:02:47 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/26 23:24:05 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource():index(0)
{
	std::cout << "MateriaSource Default constructor" << std::endl;
	for(int i = 0; i < 4; i++){
		materias[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &rhs)
{
	std::cout << "MateriaSource Copy Constructor" << std::endl;
	for(int i = 0; i < 4; i++){
		materias[i] = NULL;
	}
	operator=(rhs);

}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
	std::cout << "MateriaSource Copy Assignment operator" << std::endl;
	for (int i = 0; i < 4; i++){
		if (materias[i])
			delete materias[i];
		if (rhs.materias[i])
			materias[i] = rhs.materias[i]->clone();
		else
			materias[i] = NULL;
	}
	index = rhs.index;
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for(int i = 0; i <= index; i++){
		delete materias[i];
	}
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (index < 4)
	{
		materias[index] = m;
		index++;
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i <= index; i++)
	{
		if (materias[i]->getType() == type)
			return materias[i]->clone();
	}
	return (0);
}
