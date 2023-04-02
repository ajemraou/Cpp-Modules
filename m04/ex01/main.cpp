/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 21:24:44 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/25 23:22:45 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

// int main()
// {
// 	const Animal* j = new Dog();
// 	std::cout << std::endl;
// 	const Animal* i = new Cat();
// 	std::cout << std::endl;
// 	delete j;//should not create a leak
// 	std::cout << std::endl;
// 	delete i;
// }

// int main()
// {
// 	Animal *array[10];

// 	for (int i = 0; i < 10; i++)
// 	{
// 		if (i < 5)
// 		{
// 			array[i] = new Cat();
// 			std::cout << std::endl;
// 		}
// 		else
// 		{
// 			array[i] = new Dog();
// 			std::cout << std::endl;
// 		}
// 	}
// 	std::cout << "\n----- Construction completed ------- \n" << std::endl;
	
// 	for (int i = 0; i < 10; i++)
// 	{
// 		if (i < 5)
// 		{
// 			delete array[i];
// 			std::cout << std::endl;
// 		}
// 		else
// 		{
// 			delete array[i];
// 			std::cout << std::endl;
// 		}
// 	}
// 	std::cout << "\n------ Destruction completed -------- " << std::endl;
// }

int main()
{
	Dog rick, rick1;
	std::cout << std::endl;
	Cat riri;
	std::cout << std::endl;
	{
		Cat riri1 = riri;
		riri1 = riri;
	}
	std::cout << std::endl;
	rick = rick1;
	std::cout << std::endl;
}