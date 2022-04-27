/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:20:07 by thi-phng          #+#    #+#             */
/*   Updated: 2022/04/27 10:28:41 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <PhoneBook.Class.hpp>
#include <cstring>
#include <sstream>

PhoneBook::PhoneBook(void){
    std::cerr << "Hello! Over here! Constructor PhoneBook" << std::endl;
    return ;
}

PhoneBook::~PhoneBook(void){
    std::cerr << "Hello! Over here! Destructor PhoneBook" << std::endl;
    return ;
}

void    PhoneBook::search(int index, int ok_im_done)
{
    int                 i;
    std::string         cmd;
    std::stringstream   ss;
    
    i = 0;
    std::cout << " ---***--- Welcome to Phone Book contact list ---***---"
    std::cout << "      index | first_name | last_name | nickname" << std::endl;
    while (i < 8)
    {
        std::cout << "          " << i + 1 << "|";
        this->contact[i].display_one();
        std::cout << std::endl;
        i++;
    }
    std::cout << "Who are you looking for?" << std::endl;
    std::getline(strd::cin, cmd);
    while (cmd.length() == 0)
    {
        
    }
}