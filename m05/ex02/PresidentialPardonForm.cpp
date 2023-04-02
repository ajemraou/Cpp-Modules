/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:20:46 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/31 13:00:43 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
	
}

PresidentialPardonForm::PresidentialPardonForm(const std::string name):Form("PresidentialPardonForm", 25, 5), _target(name)
{

}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & ob):_target(ob._target)
{	
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm&)
{
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const
{
	check(executor);
	std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}