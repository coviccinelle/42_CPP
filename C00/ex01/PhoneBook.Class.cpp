/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:20:07 by thi-phng          #+#    #+#             */
/*   Updated: 2022/04/28 11:48:48 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.Class.hpp"
#include <cstring>
#include <sstream>

#include <string>
#include <iomanip>
#include <utility>
#include <iostream>
#include <stdexcept>

PhoneBook::PhoneBook(void){
    std::cerr << "Hello! Over here! Constructor PhoneBook" << std::endl;
    return ;
}

PhoneBook::~PhoneBook(void){
    std::cerr << "Hello! Over here! Destructor PhoneBook" << std::endl;
    return ;
}


// void	searchContact(Directory contact[8], int contact_number)
// {
// 	std::int16_t num;
// 	std::string data;

// 	std::cout << "PHONE BOOK CONTACT LIST" << std::endl;
// 	std::cout << "     index|first name| last name|  nickname" << std::endl;
// 	for (int i = 0; i < 8 && i < contact_number; i++)
// 	{
// 		std::cout << "         " << i << '|';
// 		contact[i].Directory::display();
// 		std::cout << std::endl;
// 	}
// 	std::cout << "Which Contact do you want to display completely?" << std::endl;
// 	std::getline(std::cin, data);
// 	if (data[1] != '\0')
// 	{
// 		std::cout << "Incorrect Number" << std::endl;
// 		return ;
// 	}
// 	num = std::stoi(data);
// 	if (num < contact_number && num >= 0)
// 		contact[num].Directory::display_all();
// 	else
// 		std::cout << "Incorrect Number" << std::endl;
// }


void    PhoneBook::search(Contact contact[8], int index)
{
    __int16_t      a;
    std::string         cmd;
    
    std::cout << " ---***--- 🌻🌼🌸 Welcome to Phone Book contact list 🌻🌼🌸 ---***---" << std::endl;
    std::cout << "      index | first_name | last_name | nickname" << std::endl;
    for (int i = 0; i < 8 && i < index; i++)
    {
        std::cout << "          " << i + 1 << "|";
        contact[i].Contact::display_one();
        std::cout << std::endl;
    }
    std::cout << "Who are you looking for 👀 ?" << std::endl;
    std::getline(std::cin, cmd);
    if (cmd[0] == '\0')
    {
        std::cout << "Incorrect number" << std::endl;
        return ;
    }
    a = std::stoi(cmd, NULL, 10);
    if (a < index && a >= 0)
        contact[a].Contact::display_one();
    else
        std::cout << "Incorrect number" << std::endl;
}


void    PhoneBook::open(void)
{
    int         index;
    std::string input; 

    std::cout << "Hi there! Welcome to the PhoneBook! 🌻🌼🌸 Please select : ADD, SEARCH or EXIT" << std::endl;
    index = 0;
    while (std::getline(std::cin, input))
    {
        if (input == "ADD" || input == "add")
        {
            std::cout << "\t\t\t****\t\t\t" << std::endl << "ADD selected" << std::endl;
            if (index == 8)
                std::cout << "🚨 Alert: The PhoneBook is full. The oldest contact will be replaced by this new one" << std::endl;
            else
            {
                this->contact[index].add_contact();
                std::cout << "Contact added succesfully! ✅ hihi" << std::endl << "\t\t ---------\t\t" << std::endl;
                index++;
            }
        }
        else if (input == "SEARCH" || input == "search")
        {
            std::cout << "Tell me gurl, who are you looking for? 👀 " << std::endl;
            this->search(contact, index);
        }
        else if (input == "EXIT" || input == "exit")
        {
            std::cout << "Awww... 😢 you're leaving? 😭 For real? Okay byeee! Se youuuu! Bisous moahhh" << std::endl;
            return ;
        }
        else
            std::cout << "💣💣💣 Errr wrong commande dude !!! 💣💣💣 Please try again" << std::endl;
    }
}