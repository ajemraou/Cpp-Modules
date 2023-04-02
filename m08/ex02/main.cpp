/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:59:58 by ajemraou          #+#    #+#             */
/*   Updated: 2023/02/14 14:14:14 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

/* -------------------------------- */
// int main()
// {
// 	//a2<int> a;
	
// 	MutantStack<int> mstack;
// 	mstack.push(5);
// 	mstack.push(17);
// 	std::cout << mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737);
	
// 	//[...]
// 	mstack.push(0);
// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	std::stack<int> s(mstack);
	
// 	return (0);
// }

/* -------------------------------- */
int main()
{
	MutantStack<int> mstack;
	mstack.push(15);
	mstack.push(7);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(30);
	mstack.push(37);
	mstack.push(13);
	mstack.push(0);
	MutantStack<int> mstack1(mstack);
	
	/*-------------------*/
	MutantStack<int>::iterator it = mstack1.begin();
	MutantStack<int>::iterator ite = mstack1.end();
	++it;
	--it;
	std::cout << "==============================" << std::endl;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "==============================" << std::endl;
	it = mstack.begin();
	ite = mstack.end();
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
}

/* -------------------------------- */
// int main()
// {
// 	MutantStack<int> mstack;
// 	mstack.push(1);
// 	mstack.push(2);
// 	std::cout << mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push(2);
// 	mstack.push(3);
// 	mstack.push(4);
// 	mstack.push(5);
// 	MutantStack<int> mstack1;
	
// 	/*-------------------*/
// 	mstack1 = mstack;
// 	MutantStack<int>::iterator it = mstack1.begin();
// 	MutantStack<int>::iterator ite = mstack1.end();
// 	++it;
// 	--it;
// 	std::cout << "==============================" << std::endl;
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// 	std::cout << "==============================" << std::endl;
// 	it = mstack.begin();
// 	ite = mstack.end();
// 	while (it != ite)
// 	{
// 		std::cout << *it << std::endl;
// 		++it;
// 	}
// }


/* -------------------------------- */
// int main()
// {
// 	std::stack<int>  s_stack;
// 	MutantStack<int> mstack;
// 	if (s_stack.empty())
// 		std::cout << "True" << std::endl;
// 	if (mstack.empty())
// 		std::cout << "True" << std::endl;
// 	s_stack.push(37);
// 	mstack.push(13);
// 	s_stack.swap(mstack);

// 	std::cout << s_stack.top() << mstack.top() << std::endl;
// }