/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:34:48 by ajemraou          #+#    #+#             */
/*   Updated: 2022/11/24 15:49:57 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HarlFilter.hpp"

int main(int ac, char **argv)
{
	if (ac == 2)
	{
		HarlFilter object;

		object.complain(argv[1]);
	}
}