/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 21:07:46 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/25 23:38:38 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog Default Constructor" << std::endl;
	brain = new Brain();
	type = "Dog";
}

Dog::Dog(const Dog &rhs):Animal(rhs)
{
	std::cout << "Dog Copy Constructor" << std::endl;
	brain = new Brain();
	operator=(rhs);
}

Dog &Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog Copy Assignment operator" << std::endl;
	type = rhs.type;
	*brain = *(rhs.brain);
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor" << std::endl;
	delete brain;
}

void	Dog::makeSound() const
{
	std::cout << "Animal : Dog : Howl Howl ...... " << std::endl;
}
