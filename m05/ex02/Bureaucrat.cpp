/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 18:02:26 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/30 15:59:05 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Bureaucrat::Bureaucrat() : grade(75)
{
	std::cout << "Bureaucrat Default Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, const int grade):name(name), grade(grade)
{
	std::cout << "Bureaucrat Constructor" << std::endl;
	if (grade < 1)
		throw (GradeTooHighException());
	else if (grade > 150)
		throw (GradeTooLowException());
}

Bureaucrat::Bureaucrat(const Bureaucrat &rhs):name(rhs.name), grade(rhs.grade)
{
	std::cout << "Bureaucrat Copy constructor" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	(void)rhs;
	std::cout << "Bureaucrat Copy Assignment operator" << std::endl;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor" << std::endl;
}

void Bureaucrat::increment()
{
	if (grade == 1)
		throw (GradeTooHighException());
	grade--;
}

void Bureaucrat::decrement()
{
	if (grade == 150)
		throw (GradeTooLowException());
	grade++;
}

void	Bureaucrat::signForm( const Form &ob )
{
	if (ob.get_signed() == true)
		std::cout << name << " signed " << ob.getName() << std::endl;
	else
	{
		std::cout << name << " couldn't sign " << ob.getName() << " because ";
		throw (Bureaucrat::GradeTooLowException());
	}
}

void	Bureaucrat::executeForm(Form const & form)
{
	if (form.get_signed() == true && grade <= form.get_execute())
	{
		form.execute( *this );
		std::cout << name << " executed " << form.getName() << std::endl;
	}
	else
		throw (Bureaucrat::GradeTooLowException());
}


int Bureaucrat::getGrade() const
{
	return grade;
}

const std::string Bureaucrat::getName() const
{
	return name;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& ob)
{
	os << ob.getName();
	os << ", bureaucrat grade ";
	os << ob.getGrade();
	return os;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("grade is too high!");
}
const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("grade is too low!");
}
