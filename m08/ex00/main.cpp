/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 20:17:52 by ajemraou          #+#    #+#             */
/*   Updated: 2023/02/14 14:38:57 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
  	std::vector<int> test(10);
    for (int i = 0; i < 10; i++)
    {
        test[i] = i;
    }
	try
	{
		bool result = easyfind(test, 0);
    	std::cout << result << std::endl;
	}
	catch (std::runtime_error r)
	{
		std::cerr << r.what() << std::endl;
	}
	catch (...)
	{
		std::cerr << "what ever ... " << std::endl;
	}
}