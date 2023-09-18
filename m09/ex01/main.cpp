/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 22:20:54 by ajemraou          #+#    #+#             */
/*   Updated: 2023/09/13 22:36:59 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac == 2)
	{
		RPN	obj(av[1]);
		obj.CheckErrors();
	}
	else
	{
		std::cerr << "Error: Please provide the necessary input!" << std::endl;
	}
}