/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:37:16 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/18 15:37:16 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
	const Point a(-1.75f, 2.25f);
	const Point b(1.75f, 2.25f);
	const Point c(0.00f, 0.00f);
	const Point point(1.25f,2.25f);

	if  (bsp(a, b, c, point) == true)
		std::cout << "Inside" << std::endl;
	else
		std::cout << "Outside" << std::endl;
}