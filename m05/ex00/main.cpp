/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:02:29 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/30 16:26:58 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main()
{
	try
	{
		Bureaucrat b1("Beholder_Monster", 11);
		try
		{
			b1.decrement();
			std::cout << b1 << std::endl;
			b1.increment();
			std::cout << b1 << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}