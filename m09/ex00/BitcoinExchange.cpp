/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:42:31 by ajemraou          #+#    #+#             */
/*   Updated: 2023/09/13 22:19:59 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange( const std::string &infile ):Infile(infile.c_str()), Dbfile("data.csv")
{
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange&)
{

}

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange&)
{
    return *this;
}

BitcoinExchange::~BitcoinExchange()
{

}

void    BitcoinExchange::StoreValue()
{
    std::string key;
    std::string value;
    std::string::size_type pos;

    if (Dbfile.is_open() == true)
    {
        while ( std::getline(Dbfile, Dbcontent) )
        {
            pos = Dbcontent.find(',');
            if (pos != std::string::npos)
            {
                key = Dbcontent.substr(0, pos);
                value = Dbcontent.substr(pos + 1, Dbcontent.size());
				if ( IsValidDate( key ) == true )
				{
                	DBase.insert(std::pair<std::string, float>(key, std::atof(value.c_str())));
				}
			}
        }
    }
}

bool    BitcoinExchange::IsValidDate( const std::string &Date )
{
	int						number;

	std::string				DateValue;

    std::string::size_type	fpos;
    std::string::size_type	lpos;
	
    fpos = Date.find_first_of('-');
	lpos = Date.find_last_of('-');
	
	if ( fpos != std::string::npos && fpos != lpos )
	{
		/* Is a valid Year */
		DateValue = Date.substr(0, fpos);
		number = std::atoi(DateValue.c_str());
		if ( number <= 0 || number >= 2099)
		{
			return (false);
		}
		/* Is a valid Month */
		DateValue = Date.substr(fpos + 1, lpos - fpos - 1);
		number = std::atoi(DateValue.c_str());
		if ( number <= 0 || number > 12 )
		{
			return (false);
		}
		/* Is a valid Day */
		DateValue = Date.substr(lpos + 1, Date.size() - lpos - 1);
		number = std::atoi(DateValue.c_str());
		if ( number <= 0 || number > 31 )
		{
			return (false);
		}
		return (true);
	}
    return (false);
}

void	BitcoinExchange::trim( std::string& totrim )
{
	std::string::size_type	pos;
	
	pos = totrim.find_first_not_of(' ');
	totrim.erase(0, pos);
	pos = totrim.find_first_of(' ');
	if ( pos != std::string::npos )
	{
		totrim.resize(pos);
	}
}

bool	BitcoinExchange::IsValidNumber( std::string value )
{
	int		number;
	
	std::string::size_type	pos;
	
	number = std::atoi(value.c_str());

	if ( value.size() > 8 || number > 1000)
	{
		std::cerr << "Error: too large a number." << std::endl;
		return (false);
	}
	if ( number < 0 )
	{
		std::cerr << "Error: not a positive number." << std::endl;
		return (false);
	}
	if ( value[0] == '-' )
	{
		value.erase(0, 1);
	}
	pos = value.find_first_not_of(".0123456789");
	if ( pos != std::string::npos )
	{
		std::cerr << "Error: Please Enter a valid number!" << std::endl;
	}
	return (true);
}



void	BitcoinExchange::ParseAndDisplay()
{
	float		number;
	std::string key;
    std::string value;
    std::string::size_type pos;

    if (Infile.is_open() == true)
    {
        while ( std::getline(Infile, Fcontent) )
        {
            pos = Fcontent.find('|');
			if ( pos != std::string::npos )
            {
                key = Fcontent.substr(0, pos);
				trim(key);
                value = Fcontent.substr(pos + 1, Fcontent.size());
				trim(value);
				if ( IsValidDate( key ) == true )
				{
					if (IsValidNumber( value ) == true )
					{
						number = std::atof(value.c_str());
						it = DBase.lower_bound(key);
						std::cout << it->first << " => " << number << " = " << number * it->second << std::endl;
					}
				}
				else
				{
					std::cerr << "Error: bad input => " << Fcontent << std::endl;
				}
			}
			else
			{
				std::cerr << "Error: bad input => " << Fcontent << std::endl;
			}
        }
    }
}