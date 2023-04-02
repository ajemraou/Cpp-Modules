/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:02:24 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/29 18:08:55 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Form;

class Bureaucrat
{
	const std::string name;
	int grade;
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
	
	void	signForm( const Form& );

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

