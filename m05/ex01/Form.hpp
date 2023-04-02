/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 16:45:33 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/30 15:09:28 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form{
	const std::string	_name;
	bool				_signed;
	const int 			_sign;
	const int 			_execute;
public:
	Form();
	Form(const std::string, const int, const int);
	Form(const Form &);
	Form& operator=(const Form &);
	~Form();
	
	void	beSigned( const Bureaucrat& );

	std::string getName() const;
	bool		get_signed() const;
	int			get_execute() const;
	int			get_sign() const;

	class GradeTooHighException : public std::exception{
	public:
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception{
	public:
		const char* what() const throw();
	};
};

std::ostream&	operator<<(std::ostream&, Form &);

#endif	/* FORM */