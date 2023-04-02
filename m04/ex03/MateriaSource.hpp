/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:02:41 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/26 17:20:49 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	AMateria	*materias[4];
	int			index;
public:
	/* orthodox Canonical Class */

	MateriaSource();
	MateriaSource( const MateriaSource& );
	MateriaSource& operator=( const MateriaSource& );
	~MateriaSource();
	
	void		learnMateria(AMateria*);
	AMateria*	createMateria(std::string const & type);
};

#endif /* MATERIASOURCE_HPP */