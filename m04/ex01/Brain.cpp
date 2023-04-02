/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 21:09:28 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/24 16:57:54 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default Constructor" << std::endl;
}

Brain::Brain(const std::string id)
{
	std::cout << "Brain Constructor" << std::endl;
	for (int i = 0; i < 100; i++)
		ideas[i] = id;
}

Brain::Brain(const Brain &rhs)
{
	std::cout << "Brain Copy Constructor" << std::endl;
	operator=(rhs);
}

Brain &Brain::operator=(const Brain &rhs)
{
	std::cout << "Brain Copy Assignment operator" << std::endl;
	for (unsigned int i = 0; i < 100;i++)
		ideas[i] = rhs.ideas[i];
	return(*this);
}

Brain::~Brain()
{
	std::cout << "Brain Destructor" << std::endl;
}
