/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 21:25:38 by ajemraou          #+#    #+#             */
/*   Updated: 2022/11/24 17:04:25 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
	std::string name = "HI THIS IS BRAIN";
	std::string *ptr = &name;
	std::string &ref = name;
	/* print the memory address of name and pointer to name
	and ref to name */
	std::cout << &name << std::endl;
	std::cout << ptr << std::endl;
	std::cout << &ref << std::endl;
	/* print the value of the string variable...then pointer ..then ref*/
	std::cout << name << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << ref << std::endl;
    return 0;
}