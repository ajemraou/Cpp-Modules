/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 19:24:59 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/22 21:31:09 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
	
public:
	Dog();
	Dog(const Dog&);
	Dog operator=(const Dog&);
	~Dog();

	void	makeSound() const;
};

#endif /* DOG */