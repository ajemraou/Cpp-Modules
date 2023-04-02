/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:46:13 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/30 16:40:58 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <cstdlib>

class RobotomyRequestForm : public Form{
	const std::string	_target;
public:
	RobotomyRequestForm();
	RobotomyRequestForm( const std::string );
	RobotomyRequestForm( const RobotomyRequestForm& );
	RobotomyRequestForm& operator=(const RobotomyRequestForm& );

	~RobotomyRequestForm();
	
	void	execute(Bureaucrat const & executor) const;
};

#endif /* ROBOTOMYREQUESTFORM_ */