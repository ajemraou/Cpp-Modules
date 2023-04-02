/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 22:51:46 by ajemraou          #+#    #+#             */
/*   Updated: 2023/02/14 14:42:29 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

// int main()
// {
// 	Span sp = Span(15);
// 	try
// 	{
// 		sp.addNumber(2147483647);
// 		sp.addNumber(-2147483618);
// 		sp.addNumber(2147483610);
// 		sp.addNumber(-2147483241);
// 		sp.addNumber(2147481654);
// 		sp.addNumber(-2147480641);
// 		sp.addNumber(2147403644);
// 		sp.Display_info();
// 	}
// 	catch (std::exception &e)
// 	{
// 		std::cout << e.what() << std::endl;
// 	}
// 	return 0;
// }

int main()
{
	
	Span sp = Span(12);
	Span example;
	std::vector<int> numbers;
	numbers.push_back(3);
	numbers.push_back(17);
	numbers.push_back(9);
	numbers.push_back(11);
	example = sp;
	try
	{
		sp.add_range(numbers.begin(), numbers.end());
		example.add_range(numbers.begin(), numbers.end());
		sp.Display_info();
		std::cout << "----------------------" << std::endl;
		example.Display_info();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return 0;
}