/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:18:57 by ajemraou          #+#    #+#             */
/*   Updated: 2022/10/25 14:41:46 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook 	phonebook;
	Contact		contact;
	std::string str;
	
	std::cout << "PhoneBook$ ";
	while (getline(std::cin, str))
	{
		if (str == "ADD")
			phonebook.add_command(phonebook, contact);
		else if (str == "SEARCH")
			phonebook.search_command(phonebook);
		else if (str == "EXIT")
			break ;
		else
			std::cout << "Please Enter valid command" << std::endl;
		std::cout << "PhoneBook$ " ;
	}
}