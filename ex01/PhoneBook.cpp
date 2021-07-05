/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssghuri <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 19:28:58 by ssghuri           #+#    #+#             */
/*   Updated: 2021/07/03 19:29:03 by ssghuri          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

int PhoneBook::id = 0;
int PhoneBook::cpt = 0;


PhoneBook::PhoneBook( void )
{
    this->first();
}

PhoneBook::~PhoneBook( void )
{
    std::cout << "See you later ✆" << std::endl;
}

void    PhoneBook::Add_contact( void )
{
    std::string firstname;
    std::string lastname;
    std::string nickname;
    std::string phonenumber;
    std::string darkestsecret;

    if (PhoneBook::id == numbercontact)
    {
        PhoneBook::id = 0;
        PhoneBook::cpt--;
    }
    this->Incontact[PhoneBook::id].setid(id + 1);
    std::cout << "Enter First Name :\n";
    std::getline (std::cin, firstname);
    this->Incontact[PhoneBook::id].set_firstname(firstname);

    std::cout << "Enter Last Name :\n";
    std::getline (std::cin, lastname);
    this->Incontact[PhoneBook::id].set_lastname(lastname);

    std::cout << "Enter NickName :\n";
    std::getline (std::cin, nickname);
    this->Incontact[PhoneBook::id].set_nickname(nickname);

    std::cout << "Enter Phone Number :\n";
    std::getline (std::cin, phonenumber);
    this->Incontact[PhoneBook::id].set_phonenumber(phonenumber);

    std::cout << "Enter Darkest Secret :\n";
    std::getline (std::cin, darkestsecret);
    this->Incontact[PhoneBook::id].set_darkestsecret(darkestsecret);

    PhoneBook::id++;
    PhoneBook::cpt++;
    if (PhoneBook::cpt > numbercontact)
        PhoneBook::cpt = numbercontact;
    std::cout << "Contact added with succes!!\n";
}

void    PhoneBook::Search_contact( void )
{
    std::cout << std::setw(10) << "Index" << "|";
    std::cout << std::setw(10) << "First Name" << "|";
    std::cout << std::setw(10) << "Last Name" << "|";
    std::cout << std::setw(10) << "NickName" << "|" << "\n";
    int i = 0;
    if (PhoneBook::id == 0)
    {
        std::cout << "Liste of contact is empty \n";
       
    }
    else
    {
        while(i < PhoneBook::cpt)
        {
            std::cout << std::setw(10) << i + 1 << "|";
            if (Incontact[i].get_firstname().length() > 10)
                std::cout << Incontact[i].get_firstname().substr(0,9) << "." << "|";
            else
                std::cout << std::setw(10) << Incontact[i].get_firstname() << "|";
            if (Incontact[i].get_lastname().length() > 10)   
                std::cout << Incontact[i].get_lastname().substr(0,9) << "." << "|";
            else     
                std::cout << std::setw(10) << Incontact[i].get_lastname() << "|";
            if (Incontact[i].get_nickname().length() > 10)    
                std::cout << Incontact[i].get_nickname().substr(0,9) << "." << "|";
            else
                std::cout << std::setw(10) << Incontact[i].get_nickname() << "|";
            std::cout << "\n";
            i++;
        }
        std::cout << "Enter the number of contact: " <<std::endl;
        Print_contact();
    }
}

void    PhoneBook::Print_contact( void )
{
    int id = 0;

    std::cin >> id;
    if (std::cin.good())
    {
        if (id == Incontact[id - 1].getid())
        {
            std::cout << "Index" << std::setw(11) << ":" << id << "\n";
            std::cout << "First Name" << std::setw(6) << ":" << Incontact[id - 1].get_firstname() << "\n";
            std::cout << "Last Name" << std::setw(7) << ":" << Incontact[id - 1].get_lastname() << "\n";
            std::cout << "NickName" << std::setw(8) << ":" << Incontact[id - 1].get_nickname() << "\n";
            std::cout << "Phone Number" << std::setw(4) << ":" << Incontact[id - 1].get_phonenumber() << "\n";
            std::cout << "Darkest Secret" << std::setw(2) << ":" << Incontact[id - 1].get_darkestsecret() << "\n";
        }     
        else
        {
            std::cout << "Id of contact not valid must be between 1 and 9\n";
        }
    }
    else
    {
        std::cin.clear();
        std::cout << "Id of contact not valid must be between 1 and 9!!\n";
    }
    std::cin.ignore(10000, '\n');
}

void    PhoneBook::first( void ){
    int exit = 0;
    while(!std::cin.eof() && exit == 0)
    {
        std::cout << "Enter the command ADD or SEARCH or EXIT:" << std::endl;
        std::getline (std::cin,this->Command);
        if (this->Command.compare("ADD") == 0)
            Add_contact();
        else if (this->Command.compare("SEARCH") == 0)
        {
            Search_contact();
        } 
        else if (this->Command.compare("EXIT") == 0)
            exit = 1;
    }
}
