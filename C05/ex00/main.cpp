/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 17:18:28 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/14 18:06:07 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat bur;
    
    std::cout << bur;
    bur.setGrade(130);
    std::cout << bur;
    std::cout << "---------" << std::endl;
    bur.increment();
    std::cout << bur;
    bur.setGrade(140);
    std::cout << bur;
    bur.decrement();
    std::cout << bur;
    bur.setGrade(0);
    std::cout << bur;
    return (0);   
}