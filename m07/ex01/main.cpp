/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 13:59:51 by ajemraou          #+#    #+#             */
/*   Updated: 2023/02/08 14:21:47 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome{
 public:
    Awesome( void ) : _n(42){return ;}
    int get( void ) const { return this->_n;}
    private: int _n;
 }; 
 
std::ostream & operator<<( std::ostream & o, Awesome const & rhs){
    o << rhs.get();
     return o; 
 }

template< typename T>
void print( T const & x ) { std::cout << x << std::endl; return;}

int main() {
    int tab[] = {0, 1,2,3,4};
//  never understood why you can't write int[] tab. Wouldn't that make more sense? 
    Awesome tab2[5];
    iter( tab, 5, print);
    iter( tab2, 5, print);
	iter( "string", 6, print);
    return 0;
 }
