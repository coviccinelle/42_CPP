/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 09:48:22 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/28 09:50:12 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    
    std::cout << "hihiehehe \n";
    std::cout << "Shortest span is : " << sp.shortestSpan() << std::endl;// -> bug
    std::cout << "Longest span is : " << sp.longestSpan() << std::endl;
    return 0;
}