/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:22:28 by ajemraou          #+#    #+#             */
/*   Updated: 2022/10/25 15:41:46 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>

/* ╔════════════════════════════════════════════════════════╗ */
/* ║ 		  ______                                        ║ */
/* ║ 		 / _____)           _               _           ║ */
/* ║ 		| /      ___  ____ | |_  ____  ____| |_         ║ */
/* ║ 		| |     / _ \|  _ \|  _)/ _  |/ ___)  _)        ║ */
/* ║ 		| \____| |_| | | | | |_( ( | ( (___| |__        ║ */
/* ║ 		 \______)___/|_| |_|\___)_||_|\____)\___)       ║ */
/* ║                                                        ║ */   
/* ╚════════════════════════════════════════════════════════╝ */

class Contact{
	std::string name;
	std::string last_name;
	std::string nickname;
	std::string darkest_secret;
	std::string	phone_number;
public:
	/* seter and geter for name */
	void		set_name(std::string Name);
	std::string	get_name();
	/* seter and geter for last_name */
	void		set_last_name(std::string Last_name);
	std::string	get_last_name();
	/* seter and geter for nickname */
	void		set_nickname(std::string Nickname);
	std::string	get_nickname();
	/* seter and geter for darkest_secret */
	void		set_darkest_secret(std::string Darkest_secret);
	std::string get_darkest_secret();
	/* seter and geter for phone_number */
	void		set_phone_number(std::string Phone_number);
	std::string	get_phone_number();
	/* Align name and get size */
	void 	align_name(std::string name);
	size_t	size(std::string str);
	
};
#endif