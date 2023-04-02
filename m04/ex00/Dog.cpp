/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 19:24:56 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/25 23:29:50 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog()
{
	std::cout << "Dog Default Constructor" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog &rhs):Animal(rhs)
{
	std::cout << "Dog Copy Constructor" << std::endl;
	operator=(rhs);
}

Dog Dog::operator=(const Dog &rhs)
{
	std::cout << "Dog Copy Assignment operator" << std::endl;
	type = rhs.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Animal : Dog : Howl Howl ...... " << std::endl;
}
