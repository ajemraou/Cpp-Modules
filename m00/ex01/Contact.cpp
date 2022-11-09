/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:22:28 by ajemraou          #+#    #+#             */
/*   Updated: 2022/10/25 12:40:44 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::set_name(std::string Name)
{
	name = Name;
}

std::string	Contact::get_name()
{
	return name;
}

void		Contact::set_last_name(std::string Last_name)
{
	last_name = Last_name;
}

std::string	Contact::get_last_name()
{
	return last_name;
}

void		Contact::set_nickname(std::string Nickname)
{
	nickname = Nickname;
}

std::string	Contact::get_nickname()
{
	return nickname;
}

void		Contact::set_darkest_secret(std::string Darkest_secret)
{
	darkest_secret = Darkest_secret;
}

std::string Contact::get_darkest_secret()
{
	return darkest_secret;
}

void		Contact::set_phone_number(std::string Phone_number)
{
	phone_number = Phone_number;
}

std::string	Contact::get_phone_number()
{
	return phone_number;
}
void 	Contact::align_name(std::string name)
{
	if (name.size() > 55)
		name.resize(55);
	std::cout << name;
}

size_t	Contact::size(std::string str)
{
	if (str.size() > 56)
		return (0);
	return (56 - str.size());
}