/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 19:28:37 by ssghuri           #+#    #+#             */
/*   Updated: 2021/07/03 19:28:40 by ssghuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <string>
#include "Contact.hpp"


class PhoneBook
{

public:

    std::string Command;
    Contact Incontact[8];
    static int id;
    static int cpt;

    PhoneBook( void );
    ~PhoneBook( void );

    void    first( void );
    void    Add_contact( void );
    void    Search_contact( void );
    void    Print_contact( void );

};

#endif
