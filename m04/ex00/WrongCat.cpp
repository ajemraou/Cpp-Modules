/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:31:54 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/25 23:31:10 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Animal.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat Default Constructor" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &rhs):WrongAnimal(rhs)
{
	std::cout << "WrongCat Copy Constructor" << std::endl;
	operator=(rhs);
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	std::cout << "WrongCat Copy Assignment operator" << std::endl;
	type = rhs.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Animal : WrongCat : Meow ....." << std::endl;
}
