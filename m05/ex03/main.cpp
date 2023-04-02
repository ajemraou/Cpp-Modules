/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:02:29 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/30 16:26:51 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try{
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		
		Bureaucrat b1("Hermes_Conrad", 34);
		
		std::cout << std::endl;
		rrf->beSigned(b1);

		std::cout << std::endl;
		b1.signForm(*rrf);
		std::cout << std::endl;
		b1.executeForm(*rrf);
		std::cout << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}