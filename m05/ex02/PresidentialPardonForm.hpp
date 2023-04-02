/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:20:39 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/30 16:37:43 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAlLPARDONFORM_HPP
#define PRESIDENTIAlLPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form{
	const std::string _target;
public:
	PresidentialPardonForm();
	PresidentialPardonForm( const std::string );
	PresidentialPardonForm( const PresidentialPardonForm& );
	PresidentialPardonForm& operator=( const PresidentialPardonForm& );
	~PresidentialPardonForm();
	
	void	execute(Bureaucrat const & executor) const;
};

#endif /* PRESIDENTIAlLPARDONFORM_HPP */