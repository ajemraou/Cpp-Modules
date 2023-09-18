/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 11:41:28 by ajemraou          #+#    #+#             */
/*   Updated: 2023/09/12 20:03:18 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <map>
#include <cstdlib>

class BitcoinExchange
{
    std::map<std::string, float>					DBase;
	std::map<std::string, float>::const_iterator	it;
    
    std::ifstream                       			Infile;
    std::ifstream                       			Dbfile;
    
    std::string                         			Fcontent;
    std::string                         			Dbcontent;
    
public:
    BitcoinExchange( const std::string& );
    BitcoinExchange( const BitcoinExchange& );
    BitcoinExchange& operator=( const BitcoinExchange& );
    ~BitcoinExchange();

    void    StoreValue();
    bool    IsValidDate( const std::string& );
	bool	IsValidNumber( std::string );
	void	ParseAndDisplay();
	void	trim( std::string& );
};

#endif /* */