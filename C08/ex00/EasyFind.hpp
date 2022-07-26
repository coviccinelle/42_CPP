/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   EasyFind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:20:24 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/26 12:29:46 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>
#include <vector>
#include <iostream>
#include <stdexcept>

template<typename T>
void    easyfind(T & stack, int n)
{
    std::vector<int>::iterator i;
    //  https://www.youtube.com/watch?v=O6MB4j7rUb8
    
    i = std::find(stack.begin(), stack.end(), n);
    // std::find will find and return a ptr OR the end if not found

    if (i == stack.end())
        throw (std::runtime_error("Element not found"));
    std::cout << "Success, the element is found !!!" << std::endl;
    std::cout << "Its value = " << std::ednl;
    std::cout << "Its address = " << &(*i) << std::ednl;
}