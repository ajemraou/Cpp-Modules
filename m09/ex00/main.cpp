/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:42:55 by ajemraou          #+#    #+#             */
/*   Updated: 2023/09/12 16:36:08 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        BitcoinExchange obj(av[1]);
        obj.StoreValue();
		obj.ParseAndDisplay();
    }
    else
    {
        std::cerr << "Error: could not open file." << std::endl;
    }
}