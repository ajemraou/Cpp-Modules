/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 16:01:39 by ajemraou          #+#    #+#             */
/*   Updated: 2022/11/24 17:03:38 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	const int N = 5;
	Zombie *ptr;
	ptr = zombieHorde(N, "Harly");
	for (int i = 0; i < N; i++)
		ptr[i].announce();
	delete [] ptr;
}