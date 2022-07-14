/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:18:28 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/14 19:11:34 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat bur;
    
    std::cout << std::endl << "----------------- [Grade should be 1] -----" << std::endl;
    std::cout << bur;
    
    std::cout << std::endl << "---------------- [Set grade at 130] -----" << std::endl;
    bur.setGrade(130);
    std::cout << bur;
    
    std::cout << std::endl << "---------------- [Set grade at 150] -----" << std::endl;
    bur.setGrade(150);
    std::cout << bur;
    
    std::cout << std::endl << "---------------- [Increment ---> 149] ---" << std::endl;
    bur.increment();
    std::cout << bur;
    
    std::cout << std::endl << "---------------- [Set grade at 150] -----" << std::endl;
    bur.setGrade(150);
    std::cout << bur;

    std::cout << std::endl << "---------------- [Decrement] ---> too low " << std::endl;
    bur.decrement();
    std::cout << bur;

    std::cout << std::endl << "---------------- [Set grade at 1] -----" << std::endl;
    bur.setGrade(1);
    std::cout << bur;

    std::cout << std::endl << "---------------- [Increment] ---> too high ---" << std::endl;
    bur.increment();
    std::cout << bur;
    
    std::cout << std::endl << "------------ [Set grade at 0] ---> too high" << std::endl;
    bur.setGrade(0);
    std::cout << bur << std::endl;
    
    return (0);   
}