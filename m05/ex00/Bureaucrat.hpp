/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:02:24 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/29 20:25:03 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
	const std::string	name;
	int					grade;
public:
	Bureaucrat(const std::string, const int);
	Bureaucrat();
	Bureaucrat(const Bureaucrat&);
	Bureaucrat& operator=(const Bureaucrat&);
	~Bureaucrat();

	const std::string getName() const;
	int	getGrade() const;

	void	increment();
	void	decrement();

	class GradeTooHighException : public std::exception{
	public:
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception{
	public:
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream&, const Bureaucrat&);

#endif /* BUREAUCRAT */

