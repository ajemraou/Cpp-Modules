/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:14:51 by ajemraou          #+#    #+#             */
/*   Updated: 2022/11/24 15:28:47 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl object;

	object.complain("DEBUG");
	object.complain("INFO");
	object.complain("WARNING");
	object.complain("ERROR");
}

