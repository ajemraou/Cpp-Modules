/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:20:21 by ajemraou          #+#    #+#             */
/*   Updated: 2022/10/25 15:45:46 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"
# include<iomanip>
# include <stdlib.h>

/* ╔════════════════════════════════════════════════════════════════════╗ */
/* ║ 	 ______  _                       ______              _          ║ */
/* ║ 	(_____ \| |                     (____  \            | |         ║ */
/* ║ 	 _____) ) | _   ___  ____   ____ ____)  ) ___   ___ | |  _      ║ */
/* ║ 	|  ____/| || \ / _ \|  _ \ / _  )  __  ( / _ \ / _ \| | / )     ║ */
/* ║ 	| |     | | | | |_| | | | ( (/ /| |__)  ) |_| | |_| | |< (      ║ */
/* ║ 	|_|     |_| |_|\___/|_| |_|\____)______/ \___/ \___/|_| \_)     ║ */
/* ║                                                                    ║ */
/* ╚════════════════════════════════════════════════════════════════════╝ */

class PhoneBook{
	int		index;
	bool	is_empty;
	Contact contact[8];
	std::string	get_number(std::string prompt);
	std::string	get_line(std::string prompt);
	void		show_contacts(PhoneBook phonebook);
	void		show_contact(Contact &contact);
	void 		align_string(std::string str);
public:
	PhoneBook();/* Default Constructor */
	void 		add_command(PhoneBook &phonebook, Contact &contact);
	void		search_command(PhoneBook &phonebook);
};

#endif
