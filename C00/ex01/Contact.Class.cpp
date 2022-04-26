/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.Class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:20:41 by thi-phng          #+#    #+#             */
/*   Updated: 2022/04/26 23:05:39 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <Contact.Class.hpp>

Contact::Contact(void){
    this->_first_name = "";
    this->_last_name = "";
    this->_nickname = "";
    this->_phone_number = "";
    this->_darkest_secret = "";
    return ;
}

Contact::~Contact(void){
    return ;
}

void    Contact::add_contact(void){
    std::cout << "---___ Adding a new contact : ___---" << std::endl;
    
        //--------*** FIRST_NAME ***-----------//
    std::cout << "First name pleaseee: ";
    std::getline(std::cin, this->_first_name);
    // while (this->_first_name == "")
    // {
    //     std::cout << "Euhhh you didn't type his/her first name! Please enter again !" << std::endl;
    //     std::cout << "First name pleasee: ";
    //     std::getline(std::cin, this->_first_name);
    // }
    
       //--------*** LAST_NAME ***-----------//
    std::cout << "Last name pleaseee: ";
    std::getline(std::cin, this->_last_name);
    // while (this->_last_name == "")
    // {
    //     std::cout << "Euhhh you didn't type his/her last name! Please enter again !" << std::endl;
    //     std::cout << "Last name pleasee: ";
    //     std::getline(std::cin, this->_last_name);
    // }
    
       //--------*** NICK_NAME ***-----------//
    std::cout << "Nickname pleaseee: ";
    std::getline(std::cin, this->_nickname);
    // while (this->_nickname == "")
    // {
    //     std::cout << "Euhhh you didn't type his/her nickname! Please enter again !" << std::endl;
    //     std::cout << "Nickname pleasee: ";
    //     std::getline(std::cin, this->_nickname);
    // }
    
       //--------*** PHONE_NUMBER ***-----------//
    std::cout << "Phone number pleaseee: ";
    std::getline(std::cin, this->_phone_number);
    // while (this->_phone_number == "")
    // {
    //     std::cout << "Euhhh you didn't type his/her phone number! Please enter again !" << std::endl;
    //     std::cout << "Phone number pleasee: ";
    //     std::getline(std::cin, this->_phone_number);
    // }
    
       //--------*** DARKEST_SECRET ***-----------//
    std::cout << "Darkest secret pleaseee: ";
    std::getline(std::cin, this->_darkest_secret);
    // while (this->_darkest_secret == "")
    // {
    //     std::cout << "Euhhh you didn't type his/her darkest secret! Please enter again !" << std::endl;
    //     std::cout << "Darkest secret pleasee: ";
    //     std::getline(std::cin, this->_darkest_secret);
    // }
}

void    Contact::display_one(void){
    if (this->_first_name == "")
        return ;

        // *** FIRST_NAME *** //
    if (this->_first_name.length() == 10)
        std::cout << this->_first_name;
    if (this->_first_name.length() > 10)
    {
        for (int i = 0; i < 10; i++)
            std::cout << this->_first_name.at(i);
        std::cout << ".";
    }
    else if (this->_first_name.length() < 10)
    {
        for (int i = 0; i < 10 - _first_name.length(); i++)
            std::cout << " ";
        std::cout << this->_first_name;
    }
    std::cout << "|";

        // *** LAST_NAME *** //
    if (this->_last_name.length() == 10)
        std::cout << this->_first_name;
    if (this->_first_name.length() > 10)
    {
        for (int i = 0; i < 10; i++)
            std::cout << this->_first_name.at(i);
        std::cout << ".";
    }
    else if (this->_first_name.length() < 10)
    {
        for (int i = 0; i < 10 - _first_name.length(); i++)
            std::cout << " ";
        std::cout << this->_first_name;
    }
    std::cout << "|";


        // *** NICK_NAME *** //
    if (this->_first_name.length() == 10)
        std::cout << this->_first_name;
    if (this->_first_name.length() > 10)
    {
        for (int i = 0; i < 10; i++)
            std::cout << this->_first_name.at(i);
        std::cout << ".";
    }
    else if (this->_first_name.length() < 10)
    {
        for (int i = 0; i < 10 - _first_name.length(); i++)
            std::cout << " ";
        std::cout << this->_first_name;
    }
    std::cout << "|";

}

