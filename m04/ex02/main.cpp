/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 11:12:34 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/25 23:42:45 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

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