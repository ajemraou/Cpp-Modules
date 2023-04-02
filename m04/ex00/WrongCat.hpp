/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 16:31:43 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/24 16:46:09 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

public:
	WrongCat();
	WrongCat(const WrongCat &);
	WrongCat &operator=(const WrongCat &);
	~WrongCat();

	void	makeSound() const;
};

#endif /* WRONGCAT_HPP */