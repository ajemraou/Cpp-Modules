/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 21:07:29 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/25 23:28:32 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat()
{
	std::cout << "Cat Default Constructor" << std::endl;
	brain = new Brain();
	type = "Cat";
}

Cat::Cat(const Cat &rhs):Animal(rhs)
{
	std::cout << "Cat Copy Constructor" << std::endl;
	brain = new Brain();
	operator=(rhs);
}

Cat &Cat::operator=(const Cat &rhs)
{
	std::cout << "Cat Copy Assignment operator" << std::endl;
	type = rhs.type;
	*brain = *(rhs.brain);
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor" << std::endl;
	delete brain;
}

void	Cat::makeSound() const
{
	std::cout << "Animal : Cat : Meow ....." << std::endl;
}

