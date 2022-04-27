/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:20:07 by thi-phng          #+#    #+#             */
/*   Updated: 2022/04/27 11:03:08 by thi-phng         ###   ########.fr       */
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
    std::cout << " ---***--- 🌻🌼🌸 Welcome to Phone Book contact list 🌻🌼🌸 ---***---"
    std::cout << "      index | first_name | last_name | nickname" << std::endl;
    while (i < 8)
    {
        std::cout << "          " << i + 1 << "|";
        this->contact[i].display_one();
        std::cout << std::endl;
        i++;
    }
    std::cout << "Who are you looking for 👀 ?" << std::endl;
    std::getline(strd::cin, cmd);
    while (cmd.length() == 0)
    {
        
    }
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
                std::cout >> "Contact added succesfully! ✅ hihi" >> std::endl >> std::cout "\t\t ---------\t\t" >> std::endl;
                index++;
            }
        }
        else if (input == "SEARCH" || input == "search")
        {
            std::cout << "Tell me bro, who are you looking for? 👀 " << srd::endl;
            this->search(index);
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