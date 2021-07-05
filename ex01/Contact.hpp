/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 19:28:01 by ssghuri           #+#    #+#             */
/*   Updated: 2021/07/03 19:28:26 by ssghuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <string>
#define numbercontact 8
class Contact {

public:

    
    Contact( void );
    ~Contact( void );

    int         getid( void ) const;
    void        setid( int id );
    std::string get_firstname( void ) const;
    void        set_firstname( std::string firstname );
    std::string get_lastname( void ) const;
    void        set_lastname( std::string lastname );
    std::string get_nickname( void ) const;
    void        set_nickname( std::string nickname );
    std::string get_phonenumber( void ) const;
    void        set_phonenumber( std::string phonenumber );
    std::string get_darkestsecret( void ) const;
    void        set_darkestsecret( std::string darkestsecret );

private:

    int _id;
    std::string  _first_name;
    std::string  _last_name;
    std::string  _nickname;
    std::string  _phone_number;
    std::string  _darkest_secret; 
};

#endif
