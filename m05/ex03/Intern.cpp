/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:47:08 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/30 16:23:46 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	table[0] = "shrubbery request";
	table[1] = "robotomy request";
	table[2] = "presidential request";
	forms[0] = &Intern::ShrubberyCreationForm_clone;
	forms[1] = &Intern::RobotomyRequestForm_clone;
	forms[2] = &Intern::PresidentialPardonForm_clone;
}

Form *Intern::makeForm(const std::string name, const std::string target)
{
	for (int i = 0; i < 3; i++){
		if (table[i] == name)
		{
			std::cout << "Intern creates " << name << std::endl;
			return ((this->*forms[i])(target));
		}
	}
	throw (std::runtime_error("Couldn't create"));
}

Form 	*Intern::ShrubberyCreationForm_clone( const std::string target )
{
	return new ShrubberyCreationForm(target);
}

Form 	*Intern::RobotomyRequestForm_clone( const std::string target )
{
	return new RobotomyRequestForm(target);
}

Form 	*Intern::PresidentialPardonForm_clone( const std::string target )
{
	return new PresidentialPardonForm(target);
}

