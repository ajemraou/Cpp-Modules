/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 21:07:22 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/25 23:38:27 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Brain.hpp"
#include "Animal.hpp"

class Cat : public Animal{
	Brain	*brain;
public:
	Cat();
	Cat(const Cat &);
	Cat &operator=(const Cat &);
	~Cat();

	void	makeSound() const;
};

#endif /* CAT_HPP */