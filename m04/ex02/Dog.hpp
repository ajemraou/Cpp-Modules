/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 21:07:48 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/25 23:39:41 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Brain.hpp"
#include "Animal.hpp"

class Dog : public Animal{
	Brain	*brain;
public:
	Dog();
	Dog(const Dog&);
	Dog &operator=(const Dog&);
	~Dog();

	void	makeSound() const;
};

#endif /* DOG */