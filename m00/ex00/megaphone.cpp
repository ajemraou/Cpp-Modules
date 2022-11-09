/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:52:43 by ajemraou          #+#    #+#             */
/*   Updated: 2022/10/24 10:54:15 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string	stoupper(std::string string)
{
	for(int i = 0; string[i]; i++){
		if (islower(string[i]))
			string[i] = toupper(string[i]);
	}
	return	string;
}

int main(int ac, char **av)
{
	std::string	string;

	if (ac > 1){
		for (int i = 1; av[i]; i++){
			string = std::string(av[i]);
			std::cout << stoupper(string) << std::endl;
		}
	}
}