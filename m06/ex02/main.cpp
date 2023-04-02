/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 19:06:53 by ajemraou          #+#    #+#             */
/*   Updated: 2023/02/03 21:47:44 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	int x;
	srand(time(NULL));
	x = rand() % 3;
	if (x == 0)
	{
		std::cout << "generating pointer to : A" << std::endl;
		return new A;
	}
	else if (x == 1)
	{
		std::cout << "generating pointer to : B" << std::endl;
		return new B;
	}
	else
	{
		std::cout << "generating pointer to : C" << std::endl;
		return new C;
	}
}

void identify(Base* p)
{
	A	*a;
	B	*b;
	C	*c;

	try {
	if ((a = dynamic_cast<A*>(p)))
		std::cout << "object type A" << std::endl;
	else if ((b = dynamic_cast<B*>(p)))
		std::cout << "object type B" << std::endl;
	else if ((c = dynamic_cast<C*>(p)))
		std::cout << "object type C" << std::endl;
	}
	catch(std::bad_cast &e)
	{
		std::cerr << e.what() << std::endl;
	}
}

void identify(Base& p)
{
	int i;
	int array[3] = {0, 0, 0};
	for (i = 0; i < 3; i++)
	{
		try
		{
			if (i == 0)
			{
				A &a = dynamic_cast<A&>(p);
				(void)a;
			}
			else if (i == 1)
			{
				B &b = dynamic_cast<B&>(p);
				(void)b;
			}
			else if (i == 2)
			{
				C &c = dynamic_cast<C&>(p);
				(void)c;
			}
		}
		catch(const std::exception& e)
		{
			array[i] = 1;
		}
	}
	if (!array[0])
		std::cout << "Type : A" << std::endl;
	else if (!array[1])
		std::cout << "Type : B" << std::endl;
	else if (!array[2])
		std::cout << "Type : C" << std::endl;
}

int main()
{
	Base *ptr = generate();
	identify(ptr);
	identify(*ptr);
	delete ptr;	
}