/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:56:58 by thi-phng          #+#    #+#             */
/*   Updated: 2022/06/26 21:27:15 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
    return;
}
Harl::~Harl(void)
{
    return;
}
void Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}


void Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
    
}

void Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    
}

void Harl::complain( std::string level )
{
    if ((level != "DEBUG") && (level != "INFO") && (level != "WARNING") && (level != "ERROR"))
        return ;
    std::string complains[4] = {"DEBUG" , "INFO", "WARNING", "ERROR"};

	//*** Important ***//
	void    (Harl::*ft_type[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int i = 0;
    if (level == "DEBUG")
        i = 1;
    if (level == "INFO")
        i = 2;
    if (level == "WARNING")
        i = 3;
    if (level == "ERROR")
        i = 4;
    switch (i)
    {
        case 1:
            (this->*ft_type[0])();
        case 2:
            (this->*ft_type[1])();
        case 3:
            (this->*ft_type[2])();
        case 4:
            (this->*ft_type[3])();
        default:
            break;
    }
}
