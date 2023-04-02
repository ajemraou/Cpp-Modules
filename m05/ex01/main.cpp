/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:02:29 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/30 16:27:13 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
	try{
		Form f1("Form1", 20, 2);
		Bureaucrat b1("Morgan_Proctor", 19);
		std::cout << b1 << std::endl;
		std::cout << f1 << std::endl;
		try{
			f1.beSigned(b1);
			b1.signForm(f1);
			b1.decrement();
			std::cout << b1 << std::endl;
			b1.increment();
			std::cout << b1 << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	catch(std::exception &r)
	{
		std::cout << r.what() << std::endl;
	}
}