/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:20:07 by thi-phng          #+#    #+#             */
/*   Updated: 2022/04/29 18:05:53 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.Class.hpp"
#include <cstring>
#include <sstream>

PhoneBook::PhoneBook(void){
    //std::cerr << "Hello! Over here! Constructor PhoneBook" << std::endl;
    return ;
}

PhoneBook::~PhoneBook(void){
    //std::cerr << "Byeee! Over here! Destructor PhoneBook" << std::endl;
    return ;
}

void    PhoneBook::search(int index, int uki)
{
    int                 a;
    std::string         cmd;
    std::stringstream   ss;
    
    a = 0;
    std::cout << "\033[0;32m ---***--- 🌻🌼🌸  Welcome to Phone Book contact list \033[0;214m 🌻🌼🌸 ---***---  \033[0;214m" << std::endl;
    std::cout << "\t   | first_name | last_name | nickname" << std::endl;
    for (int i = 0; i < 8; i++)
    {
        std::cout << "          " << i + 1 << "|";
        contact[i].Contact::display_one();
        std::cout << std::endl;
    }
    std::cout << "Who are you looking for 👀 ?" << std::endl;
    std::getline(std::cin, cmd);
    while (cmd.length() == 0)
    {
        std::cout << "🌸 Incorrect number" << std::endl;
        std::cout << "Who are you looking for 👀 ?" << std::endl;
        std::getline(std::cin, cmd);
    }
    ss << cmd;
    ss >> a;
    //a = std::stoi(cmd)
    //std::cout << "aaaaaaa = " << a << std::endl;
    if ((a > 0 && a <= index) || uki == 1)
    {
        contact[a - 1].Contact::display_one();
        std::cout << std::endl << "\t \033[1;33m Choose [ADD], [SEARCH] or [EXIT] \033[0;214m" << std::endl;
    }
    else
    {
        std::cout << "🌼 Incorrect number" << std::endl << "\t \033[1;33m Choose [ADD], [SEARCH] or [EXIT] \033[0;214m" << std::endl;
    }
}


void    PhoneBook::open(void)
{
    int         index;
    int         uki;
    std::string input; 

    uki = 0;
    std::cout << std::endl << "Hi there! Welcome to the PhoneBook! 🌻🌼🌸 Please select : ADD, SEARCH or EXIT" << std::endl;
    index = 0;
    std::cout << "Hint: [ADD], [SEARCH] or [EXIT]" << std::endl;
    while (std::getline(std::cin, input))
    {
        if (input == "ADD" || input == "add")
        {
            std::cout << "\t\t\t \033[1;33m **** \033[0;34m \t\t\t" << std::endl << "ADD selected" << std::endl;
            if (index == 8)
            {
                std::cout << "🚨 Alert: The PhoneBook is full. The oldest contact will be replaced by this new one" << std::endl;
                std::cout << std::endl << "\t \033[1;33m Choose [ADD], [SEARCH] or [EXIT] \033[0;214m" << std::endl;
                uki = 1;
                index = 0;
            }
            else
            {
                this->contact[index].add_contact();
                std::cout << "Contact added succesfully! ✅ hihi" << std::endl << "\t\t ---------\t\t" << std::endl;
                std::cout << "\t \033[1;33m Choose [ADD], [SEARCH] or [EXIT] \033[0;214m" << std::endl;
                index++;
            }
        }
        else if (input == "SEARCH" || input == "search")
        {
            std::cout << "Tell me gurl, who are you looking for? 👀 " << std::endl;
            this->search(index, uki);
        }
        else if (input == "EXIT" || input == "exit")
        {
            std::cout << "Awww... 😢 you're leaving? 😭 For real?" << std::endl << "Okay byeee! 🌻🌼🌸 See youuuu! Bisous moahhh 🌻🌼🌸 " << std::endl;
            return ;
        }
        else
        {
            std::cout << "💣💣💣 Errr wrong commande dude !!! 💣💣💣 Please try again" << std::endl;
            std::cout << std::endl << "\t \033[1;33m Choose [ADD], [SEARCH] or [EXIT] \033[0;214m" << std::endl;
        }
    }
}