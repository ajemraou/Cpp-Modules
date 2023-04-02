/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 11:46:20 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/30 16:42:07 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
{
	
}

RobotomyRequestForm::RobotomyRequestForm(const std::string name):Form("RobotomyRequestForm", 72, 45), _target(name)
{

}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & ob):_target(ob._target)
{	
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm&)
{
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}

void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const
{
	check(executor);
	std::cout << _target;
	std::cout << " has been robotomized with ";
	srand((unsigned)time(NULL));
	int random = rand() % 16;
	if (random < 8)
		std::cout << "Success" << std::endl;
	else
		std::cout << "Failure" << std::endl;
}
