/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:22:43 by ajemraou          #+#    #+#             */
/*   Updated: 2022/10/25 15:23:48 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook():index(0),is_empty(true)
{
	/*Default Constructor */
}
void PhoneBook::align_string(std::string str)
{
	if (str.size() > 10)
	{
		str.at(9) = '.';
		str.resize(10);
	}
	std::cout << std::right << std::setw(13) << str;
}


std::string	PhoneBook::get_line(std::string prompt)
{
	std::string line;
	std::cout << prompt;
	while (getline(std::cin, line) && line.empty())
		std::cout << prompt;
	return (line);
}

std::string	PhoneBook::get_number(std::string prompt)
{
	std::string line;
	int	 	 	count;
	std::cout << prompt;
	while (getline(std::cin, line))
	{
		count = 0;
		if (line.size() >= 10)
		{
			for(int i = 0; line[i] && isdigit(line[i]); i++)
					count++;
		}
		if (count >= 10)
			break ;
		std::cout << prompt;
	}
	return (line);
}

void 	PhoneBook::add_command(PhoneBook &phonebook, Contact &contact)
{
	std::string str;
	
	phonebook.is_empty = false;
	contact.set_name(get_line(" First name      : "));
	contact.set_last_name(get_line(" Last  name      : "));
	contact.set_nickname(get_line(" Nickname        : "));
	contact.set_phone_number(get_number(" Phone number    : "));
	contact.set_darkest_secret(get_line(" Darckest secret : "));
	if (phonebook.index == 16)
		phonebook.index = 8;
	phonebook.contact[phonebook.index % 8] = contact;
	phonebook.index++;
}
void 	PhoneBook::show_contacts(PhoneBook phonebook)
{
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	std::cout << std::right << "|" << "    Index    "
				<< "|" <<  "    name     " 
				<< "|" << "  last name  " 
				<< "|" << "   nickname  " << "|" << std::endl;
	std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	for(int i = 0; i < phonebook.index && i <= 7; i++)
	{
		std::cout << "|";
		std::cout << "      " << i << "      ";
		std::cout << "|";
		phonebook.align_string(phonebook.contact[i].get_name());
		std::cout << "|";
		phonebook.align_string(phonebook.contact[i].get_last_name());
		std::cout << "|";
		phonebook.align_string(phonebook.contact[i].get_nickname());
		std::cout << "|" << std::endl;
		std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;
	}
}

void 	PhoneBook::show_contact(Contact &contact)
{
	std::cout << " +--------------------+--------------------------------------------------------+ " << std::endl;
	std::cout << " | [First Name]       | ";
	contact.align_name(contact.get_name());
	std::cout << std::setw(contact.size(contact.get_name())) << "|" << std::endl;
	std::cout << " +--------------------+--------------------------------------------------------+ " << std::endl;
	std::cout << " | [Last Name]        | ";
	contact.align_name(contact.get_last_name());
	std::cout << std::setw(contact.size(contact.get_last_name())) << "|" << std::endl;
	std::cout << " +--------------------+--------------------------------------------------------+ " << std::endl;
	std::cout << " | [Nickname]         | ";
	contact.align_name(contact.get_nickname());
	std::cout << std::setw(contact.size(contact.get_nickname())) << "|" << std::endl;
	std::cout << " +--------------------+--------------------------------------------------------+ " << std::endl;
	std::cout << " | [Phone Number]     | ";
	contact.align_name(contact.get_phone_number());
	std::cout << std::setw(contact.size(contact.get_phone_number())) << "|" << std::endl;
	std::cout << " +--------------------+--------------------------------------------------------+ " << std::endl;
	std::cout << " | [Darkest Secret]   | ";
	contact.align_name(contact.get_darkest_secret());
	std::cout << std::setw(contact.size(contact.get_darkest_secret())) << "|" << std::endl;
	std::cout << " +--------------------+--------------------------------------------------------+ " << std::endl;
}

void	PhoneBook::search_command(PhoneBook &phonebook)
{
	std::string	str;
	int			index;
	unsigned int count;
	
	if (phonebook.is_empty == true)
	{	
		std::cout << "Contact is Empty" << std::endl;
		return ;
	}
	show_contacts(phonebook);
	std::cout << "Please Enter Index  : ";
	while (getline(std::cin, str))
	{
		count = 0;
		index = -1;
		for (int i = 0; isdigit(str[i]); i++)
			count++;
		if (!str.empty() && str.size() == count)
			index = std::atoi(str.c_str());
		if (index >= 0 && index < 8)
			break ;
		std::cout << "Please Enter Index  : ";
	}
	if (phonebook.index < 8 && index >= phonebook.index)
		std::cout << "Contact Does Not Exist" << std::endl;
	else
		show_contact(phonebook.contact[index]);
}
