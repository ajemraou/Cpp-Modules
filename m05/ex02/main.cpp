/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:02:29 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/30 16:27:24 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try{
		Bureaucrat b1("Number_1.0", 1);
		ShrubberyCreationForm f1 ("home");
		RobotomyRequestForm f2 ("Robo");
		PresidentialPardonForm f3("president");
		
		std::cout << std::endl;
		f1.beSigned(b1);
		f2.beSigned(b1);
		f3.beSigned(b1);
		std::cout << std::endl;
		b1.signForm(f1);
		b1.signForm(f2);
		b1.signForm(f3);
		std::cout << std::endl;
		b1.executeForm(f1);
		b1.executeForm(f2);
		b1.executeForm(f3);
		std::cout << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}