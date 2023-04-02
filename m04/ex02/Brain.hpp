/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 21:09:17 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/23 11:13:36 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain{
	std::string ideas[100];
public:
	Brain();
	Brain(const std::string);
	Brain(const Brain&);
	Brain& operator=(const Brain&);
	~Brain();
};

#endif /* BRAIN_HPP */