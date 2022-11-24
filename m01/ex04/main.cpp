/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 10:31:32 by ajemraou          #+#    #+#             */
/*   Updated: 2022/11/24 20:58:27 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int Error_hundler(std::ifstream &filestream)
{
	if (!filestream)
	{
		std::cerr << "Error : opening file dosen't exist \n";
		return (0);
	}
	else if (filestream.peek() == std::ifstream::traits_type::eof())
	{
		std::cerr << "Error : Empty file \n";
		return (0);
	}
	return (1);
}

int main(int ac, char **argv)
{
	if (ac == 4)
	{
		std::size_t		pos;
		std::string		string;
		std::string		file = argv[1];
		std::string		find = argv[2];
		std::string		replace = argv[3];
		std::ifstream	filestream(file);
		
		if (!Error_hundler(filestream))
			return (0);
		std::ofstream	replacefile(file + ".replace");
		if (!replacefile)
		{
			std::cerr << "Error : Cannot open file \n" ;
			return (0);
		}
		while(getline(filestream, string))
		{
			pos = string.find(find);
			if (pos != std::string::npos)
			{
				while (pos != std::string::npos)
				{
					string.erase(pos, find.size());
					string = string.insert(pos, replace);
					pos = string.find(find, pos + replace.size());
				}
			}
			replacefile << string << "\n";
		}
		
	}
	return (0);
}