/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 19:24:54 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/22 21:30:57 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{

public:
	Cat();
	Cat(const Cat &);
	Cat &operator=(const Cat &);
	~Cat();

	void	makeSound() const;
};

#endif /* CAT_HPP */