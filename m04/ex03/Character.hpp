/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 12:47:14 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/26 17:22:34 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CHATACTER_HPP
#define	CHATACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter{
	std::string		name;
	AMateria		*materias[4];
	int				materias_status[4];

public:
	/* orthodox Canonical Class */
	Character();
	Character( const std::string );
	Character( const Character& );
	Character& operator=( const Character& );
	~Character();
	
	std::string const	&getName() const;
	void	equip(AMateria* m);
	void	unequip(int idx);
	void	use(int idx, ICharacter& target);
};

#endif /* CHATACTER_HPP */