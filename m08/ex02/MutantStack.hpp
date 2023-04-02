/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:53:20 by ajemraou          #+#    #+#             */
/*   Updated: 2023/02/14 15:44:06 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <stack>
#include <list>

template <class T>
class MutantStack : public std::stack<T, std::deque<T> >
{

public:
		typedef typename std::deque<T>::iterator iterator;
		typedef typename std::deque<T>::const_iterator const_iterator;
		MutantStack()
		{
			
		}
		MutantStack( const MutantStack& rhs):std::stack<T, std::deque<T> >(rhs)
		{
		}
		MutantStack& operator=(const MutantStack& rhs)
		{
			this->c = rhs.c;
			return (*this);
		}
		~MutantStack()
		{
			
		}
	    iterator begin()
        {
			return this->c.begin();
        }
        iterator end()
        {
			return this->c.end();
        }
		const_iterator begin() const
        {
			return this->c.begin();
        }
        const_iterator end() const
        {
			return this->c.end();
        }
};

#endif /* MUTANTSTACK_HPP */