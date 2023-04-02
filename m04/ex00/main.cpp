/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 19:14:43 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/26 11:52:05 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;

	return 0;
}

// int main()
// {
// 	const WrongAnimal* meta = new WrongAnimal();
// 	const WrongAnimal* i = new WrongCat();

// 	std::cout << std::endl;
	
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound(); //will output the animal sound!

// 	meta->makeSound();
	
// 	std::cout << std::endl;

// 	delete meta;

// 	delete i;

// 	return 0;
// }
