/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 11:09:15 by ajemraou          #+#    #+#             */
/*   Updated: 2023/02/03 21:17:17 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main()
{
	try
	{
		Data	object;
		Data	*ptr;
	
		object.x = 1;
		object.y = 2;
		object.character = 'A';
		ptr = deserialize(serialize(&object));
		ptr->x++;
		ptr->y++;
		ptr->character++;
		std::cout << "x : " << ptr->x << std::endl;
		std::cout << "y : " << ptr->y << std::endl;
		std::cout << "character : " << ptr->character << std::endl;
	}
	catch (const std::exception &r)
	{
		std::cerr << r.what() << std::endl;
	}
}