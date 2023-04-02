/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 21:22:25 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/18 21:22:25 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0), y(0)
{

}

Point::~Point()
{

}

Point::Point(float a, float b):x(a), y(b)
{

}

Point::Point(Point &point):x(point.x), y(point.y)
{

}

Point::Point(const Point &point):x(point.x), y(point.y)
{

}

Point& Point::operator=(Point const &a)
{
	(void)a;
	return (*this);
}

const Fixed Point::get_x() const
{
	return (x);
}

const Fixed Point::get_y() const
{
	return (y);
}

float Point::calculat_w1(const Point a, const Point b, const Point c, const Point d)
{
	float ax = a.get_x().toFloat();
	float ay = a.get_y().toFloat();
	float bx = b.get_x().toFloat();
	float by = b.get_y().toFloat();
	float cx = c.get_x().toFloat();
	float cy = c.get_y().toFloat();
	float dx = d.get_x().toFloat();
	float dy = d.get_y().toFloat();

	w1 = ((ax * (cy - ay) + (dy - ay) * (cx - ax) - 
	dx * (cy - ay) ) / 
	((by - ay) * (cx - ax) - (bx - ax) * (cy - ay)));
	return (w1);
}

float Point::calculat_w2(const Point a,const Point b, const Point c, const Point d)
{

	float ay = a.get_y().toFloat();
	float by = b.get_y().toFloat();
	float cy = c.get_y().toFloat();
	float dy = d.get_y().toFloat();

	w2 = ((dy - ay - w1 * (by - ay)) / (cy - ay));
	return (w1);
}
