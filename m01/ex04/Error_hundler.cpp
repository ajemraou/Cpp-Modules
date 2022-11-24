/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Error_hundler.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 20:53:41 by ajemraou          #+#    #+#             */
/*   Updated: 2022/11/24 20:54:50 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	error_hundler()
{
	    if (!filestream)
        {
			std::cerr << "Error : opening file " << file << " dosen't exist \n";
			return (0);
		}
		else if (filestream.peek() == std::ifstream::traits_type::eof())
		{
			std::cerr << "Error : Empty file \n";
			return (0);
		}
}