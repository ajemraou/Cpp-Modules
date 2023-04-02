/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:33:08 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/25 21:55:20 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &);
	WrongAnimal	&operator=(const WrongAnimal &);
	~WrongAnimal();

	void	makeSound() const;
	void	setType(const std::string);
	std::string getType() const;
};

#endif /* WRONGANIMAL */