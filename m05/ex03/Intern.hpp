/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 13:47:01 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/30 16:25:59 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP


#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern{
	typedef  Form* (Intern::*form)( const std::string );
	
	std::string table[3];
	form		forms[3];
public:
	Intern();
	// ~Intern();
	
	Form 	*ShrubberyCreationForm_clone( const std::string );
	Form 	*RobotomyRequestForm_clone( const std::string );
	Form 	*PresidentialPardonForm_clone( const std::string );
	Form	*makeForm(const std::string, const std::string);
};

#endif /* INTERN_HPP */