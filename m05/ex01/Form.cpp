/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 16:45:44 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/31 12:56:00 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _signed(false), _sign(0), _execute(0)
{
	std::cout << "Form Default constructor" << std::endl;
	if (_sign < 1 || _execute < 1)
		throw (GradeTooHighException());
	else if (_sign > 150 || _execute > 150)
		throw (GradeTooLowException());
}

Form::Form(const std::string n, const int g1, const int g2):_name(n), _signed(false), _sign(g1), _execute(g2)
{
	std::cout << "Form Constructor" << std::endl;
	if (_sign < 1 || _execute < 1)
		throw (GradeTooHighException());
	else if (_sign > 150 || _execute > 150)
		throw (GradeTooLowException());
}

Form::Form(const Form &ob):_name(ob._name), _signed(ob._signed), _sign(ob._sign), _execute(ob._execute)
{
	
}

Form& Form::operator=(const Form &)
{
	return (*this);
}

Form::~Form()
{
	std::cout << "Form Destructor" << std::endl;
}

void Form::beSigned(const Bureaucrat &ob)
{
	if (ob.getGrade() > _sign)
		throw (GradeTooLowException());
	_signed = true;
}

std::string Form::getName() const
{
	return (_name);
}

bool		Form::get_signed() const
{
	return (_signed);
}

int			Form::get_execute() const
{
	return (_execute);
}

int			Form::get_sign() const
{
	return (_sign);
}

std::ostream&	operator<<(std::ostream& os, Form &ob)
{
	os << "Name          : " << ob.getName() << std::endl;
	os << "Sign          : " << ob.get_signed() << std::endl;
	os << "Grade_Execute : " << ob.get_execute() << std::endl;
	os << "Grade_Sign    : " << ob.get_sign() << std::endl;
	return os;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("[Form] grades is too high!");
}
const char* Form::GradeTooLowException::what() const throw()
{
	return ("[Form] grades is too low!");
}
