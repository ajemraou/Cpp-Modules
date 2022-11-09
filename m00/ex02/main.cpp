/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajemraou <ajemraou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:03:12 by ajemraou          #+#    #+#             */
/*   Updated: 2022/11/05 10:50:12 by ajemraou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ************************************************************************** //
//                                                                            //
//                tests.cpp for GlobalBanksters United                        //
//                Created on  : Thu Nov 20 23:45:02 1989                      //
//                Last update : Wed Jan 04 09:23:52 1992                      //
//                Made by : Brad "Buddy" McLane <bm@gbu.com>                  //
//                                                                            //
// ************************************************************************** //

#include <vector>
#include <algorithm>
#include <functional>
#include "Account.hpp"


int		main( void ) {

	typedef std::vector<Account::t>							  accounts_t;/* Vector Account */
	typedef std::vector<int>								  ints_t; /* Vector int*/
	typedef std::pair<accounts_t::iterator, ints_t::iterator> acc_int_t; /* pair first = Acount iter and second = ints_t iter */

	int	const				amounts[]	= { 42, 54, 957, 432, 1234, 0, 754, 16576 };/* Const array of ints */
	size_t const			amounts_size( sizeof(amounts) / sizeof(int) );/* size of array */
	accounts_t				accounts( amounts, amounts + amounts_size ); /* Acount vector (42) (54) (...) (16576) */
	accounts_t::iterator	acc_begin	= accounts.begin();/* iter at begin of account */
	accounts_t::iterator	acc_end		= accounts.end(); /* iter at end of account */

	int	const			d[]			= { 5, 765, 564, 2, 87, 23, 9, 20 };/* Const array  d */
	size_t const		d_size( sizeof(d) / sizeof(int) );/*size of array d */
	ints_t				deposits( d, d + d_size );/* Vector deposits initialzed with d */
	ints_t::iterator	dep_begin	= deposits.begin();/* iter at begin of deposits_vector */
	ints_t::iterator	dep_end		= deposits.end();/* iter at end of deposits_vector */

	int	const			w[]			= { 321, 34, 657, 4, 76, 275, 657, 7654 };/* const Array  w */
	size_t const		w_size( sizeof(w) / sizeof(int) );/*size of array w */
	ints_t				withdrawals( w, w + w_size );/*vector withdrawals initialzed with w */
	ints_t::iterator	wit_begin	= withdrawals.begin();/* iter at begin of withdrawals_vector */
	ints_t::iterator	wit_end		= withdrawals.end();/* iter at end of withdrawals_vector */
	Account::displayAccountsInfos();/* Display Info */
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );/* Display status for every
														object of accounts vector */
	for ( acc_int_t it( acc_begin, dep_begin );/*pair {[first] = iter of account_vector, [second] = iter of desposit vecotr}*/
		  it.first != acc_end && it.second != dep_end;
		  ++(it.first), ++(it.second) ) {
		(*(it.first)).makeDeposit( *(it.second) );
	}
	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );
	for ( acc_int_t it( acc_begin, wit_begin );
		  it.first != acc_end && it.second != wit_end;
		  ++(it.first), ++(it.second) ) {
		(*(it.first)).makeWithdrawal( *(it.second) );
	}
	Account::displayAccountsInfos();
	std::for_each( acc_begin, acc_end, std::mem_fun_ref( &Account::displayStatus ) );
	return 0;
}


// ************************************************************************** //
// vim: set ts=4 sw=4 tw=80 noexpandtab:                                      //
// -*- indent-tabs-mode:t;                                                   -*-
// -*- mode: c++-mode;                                                       -*-
// -*- fill-column: 75; comment-column: 75;                                  -*-
// ************************************************************************** //