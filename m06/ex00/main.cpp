/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 17:26:47 by ajemraou          #+#    #+#             */
/*   Updated: 2023/02/03 21:15:56 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

#define NAN 0.0/0.0
#define INFINITY 1.0/0.0

int check_overflow(int i, std::string str)
{
	size_t	index = 0;
	if (str[index] == '+')
		index++;
	if (str.size() == 1)
		return 1;
	std::string s1 = std::to_string(i);
	size_t size = str.find(".");
	if (size != std::string::npos)
	{
		if (!str.compare(index, size - index, s1))
			return (1);
	}
	else if (!str.compare(index, s1.size(), s1))
		return (1);
	return 0;
}

int check_overflow_char(int c, std::string str)
{
	if (check_overflow(c, str) && c >= 0 && c <= 127)
		return 1;
	return 0;
}

int check_duplicated(std::string str)
{
	int d = 0;
	int f = 0;
	int p = 0;
	int m = 0;
	size_t size = str.size();
	
	for(size_t i = 0; i < size; i++){
		if (str[i] == '.')
			d++;
		else if (str[i] == 'f')
			f++;
		else if (str[i] == '+')
			p++;
		else if (str[i] == '-')
			m++;
	}
	if (d > 1)
		return (-1);
	else if (f > 1 || (f == 1 && str[size - 1] != 'f'))
		return (-1);
	else if  (p > 1 || (p == 1 && str[0] != '+'))
		return (-1);
	else if (m > 1 || (m == 1 && str[0] != '-'))
		return (-1);
	return (1);
}

int	check_error(std::string s1)
{
	size_t size;
	if (check_duplicated(s1) == -1)
		return (-1);
	if (s1.size() == 1 && !isdigit(s1[0]))
		return (0);
	size = s1.find_first_not_of("-+0123456789");
	if (size == std::string::npos)
		return (1);
	size = s1.find_first_not_of("-+0123456789.");
	if (size == std::string::npos)
		return (2);
	size = s1.find_first_not_of("-+0123456789.f");
	if (size == std::string::npos)
		return (3);
	if (s1 == "nan" || s1 == "nanf")
		return (4);
	if (s1 == "-inf" || s1 == "-inff")
		return (5);
	if (s1 == "+inf" || s1 == "+inff")
		return (6);
	return (-1);
}

void	print_character(char c, int flage)
{
	if (flage && isprint(c))
		std::cout << "char   : '" << c << "'" <<  std::endl;
	else if (flage)
		std::cout << "char   : Non displayable" << std::endl;
	else
		std::cout << "char   : impossible" << std::endl;
}

void	print_int(int i, int flage)
{
	if (flage)
		std::cout << "int    : " << i << std::endl;
	else
		std::cout << "int    : impossible" << std::endl;
}

void	print_float(float f)
{
	std::cout << "float  : " << std::fixed << std::setprecision(1) << f << "f" <<std::endl;
}

void	print_double(double d)
{
	std::cout << "double : " << std::fixed << std::setprecision(1) << d << std::endl;
}

void	execute(char *str, int code)
{
	char	c;
	int		i;
	float	f;
	double	d;

	if (code == 0)
	{
		c = *str;
		print_character(c, check_overflow_char(c, str));
		print_int(static_cast<int>(c), check_overflow(static_cast<int>(c), str));
		print_float(static_cast<float>(c));
		print_double(static_cast<double>(c));
	}
	if (code == 1)
	{
		i = std::atoi(str);
		print_character(static_cast<char>(i), check_overflow_char(i, str));
		print_int(i, check_overflow(i, str));
		print_float(static_cast<float>(i));
		print_double(static_cast<double>(i));
	}
	if (code == 2)
	{
		d = std::strtod(str, NULL);
		print_character(static_cast<char>(d), check_overflow_char(static_cast<int>(d), str));
		print_int(static_cast<int>(d), check_overflow(static_cast<int>(d), str));
		print_float(static_cast<float>(d));
		print_double(d);
	}
	if (code == 3)
	{
		f = std::strtof(str, NULL);
		print_character(static_cast<char>(f), check_overflow_char(static_cast<int>(f), str));
		print_int(static_cast<int>(f),check_overflow(static_cast<int>(f), str));
		print_float(f);
		print_double(static_cast<double>(f));
	}
	if (code == 4)
	{
		print_character(c, 0);
		print_int(static_cast<int>(c), 0);
		print_float(NAN);
		print_double(NAN);
	}
	if (code == 5)
	{
		print_character(c, 0);
		print_int(static_cast<int>(c), 0);
		print_float(-INFINITY);
		print_double(-INFINITY);
	}
	if (code == 6)
	{
		print_character(c, 0);
		print_int(static_cast<int>(c), 0);
		print_float(INFINITY);
		print_double(INFINITY);
	}
}

int main(int ac, char **av)
{
	int code;

	if (ac == 2)
	{
		code = check_error(av[1]);
		if (code == -1)
			std::cerr << "something wrong here!" << std::endl;
		else
			execute(av[1], code);
	}
}
