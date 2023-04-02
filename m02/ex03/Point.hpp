/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:38:02 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/18 15:38:02 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point{
	const Fixed x;
	const Fixed y;

public:
	float w1;
	float w2;
	Point();
	Point(float, float);
	Point(Point&);
	Point(const Point&);
	~Point();
	
	Point &operator=(Point const &);
	const Fixed get_x() const;
	const Fixed get_y() const;
	float calculat_w1( Point const,const Point, const Point, const Point);
	float calculat_w2(const Point,const Point, const Point, const Point);

};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif