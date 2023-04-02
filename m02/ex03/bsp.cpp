/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 15:37:33 by ajemraou          #+#    #+#             */
/*   Updated: 2023/01/18 15:37:33 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Point g;

    g.calculat_w1(a, b, c, point);
    g.calculat_w2(a, b, c, point);

    if (g.w1 > 0 && g.w2 > 0 && g.w1 + g.w2 < 1)
        return (true);
    return (false);
}
