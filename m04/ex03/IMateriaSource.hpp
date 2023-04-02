/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:16:30 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/26 18:24:35 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
#define IMATERIASOURCE_HPP

#include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual	~IMateriaSource() {}
	virtual	void learnMateria(AMateria*) = 0;
	virtual	AMateria* createMateria(std::string const & type) = 0;
};

#endif	// IMATERIASOURCE_HPP