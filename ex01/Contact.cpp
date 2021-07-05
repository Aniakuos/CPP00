/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 19:27:50 by ssghuri           #+#    #+#             */
/*   Updated: 2021/07/03 19:27:53 by ssghuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

Contact::Contact( void )
{
    
}

Contact::~Contact( void )
{
    
}

int Contact::getid( void ) const {
    return this->_id;
}

void    Contact::setid( int id ) {
    this->_id = id;
}

std::string Contact::get_firstname( void ) const {
    return this ->_first_name;
}

void    Contact::set_firstname( std::string firstname )
{
    this->_first_name = firstname;
}

std::string Contact::get_lastname( void ) const {
    return this ->_last_name;
}

void    Contact::set_lastname( std::string lastname )
{
    this->_last_name = lastname;
}

std::string Contact::get_nickname( void ) const {
    return this ->_nickname;
}

void    Contact::set_nickname( std::string nickname )
{
    this->_nickname = nickname;
}

std::string Contact::get_phonenumber( void ) const {
    return this ->_phone_number;
}

void    Contact::set_phonenumber( std::string phonenumber )
{
    this->_phone_number = phonenumber;
}

std::string Contact::get_darkestsecret( void ) const {
    return this ->_darkest_secret;
}

void    Contact::set_darkestsecret( std::string darkestsecret )
{
    this->_darkest_secret = darkestsecret;
}
