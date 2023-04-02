/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 19:51:40 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/31 12:58:04 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form{
	const std::string	_target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm( const std::string );
	ShrubberyCreationForm( const ShrubberyCreationForm& );
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& );
	~ShrubberyCreationForm();

	void	execute(Bureaucrat const & executor) const;
};

#endif	/* SHRUBBERYCREATIONFORM_HPP */