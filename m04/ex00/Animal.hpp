/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 19:14:45 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/22 21:04:23 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef Animal_HPP
#define Animal_HPP

#include <iostream>

class Animal{
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal &);
	Animal	&operator=(const Animal &);
	virtual ~Animal();

	virtual void	makeSound() const;
	
	void	setType(const std::string);
	std::string getType() const;
};


#endif /* Animal */