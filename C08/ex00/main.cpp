/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:20:39 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/26 21:41:10 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "EasyFind.hpp"

int main(void)
{
    // we can create a tab without having to define the size fix before
    std::vector<int> v; //a vector type <int>
    std::cout << "Size of vector is = " << sizeof(v) << " (default = 24)" <<std::endl;
    //The 24 size you see can be explained as 3 pointers (each pointer is 8 bytes in 
    //size on 64-bit architectures; so you have 3 x 8 = 24 bytes). 
    //These pointers can be: begin + end + end of reserved memory for vector (i.e. vector's capacity)
    
    std::cout << "v.size() [number of element]= " << v.size() << " -> should be 0" << std::endl << std::endl;
    //size() returns the number of elements in the vector => should use
    //sizeof gives you the number of bytes used by the object definition, 
    //excluding any additional storage it has allocated through the use of pointers.

    std::cout << "Now we add [42, 75, 98, 12, 03, 72] in v" << std::endl << std::endl;
    v.push_back(42);
    v.push_back(75);
    v.push_back(98);
    v.push_back(12);
    v.push_back(03);
    v.push_back(72);

    std::cout << "Size of vector is = " << sizeof(v) << " -> (default 24)" << std::endl;
    std::cout << "v.size() = [" << v.size() << "] -> updated" << std::endl << std::endl;
    
    std::cout << "Let's have look inside" << std::endl;
    std::vector<int>::iterator i;
    //a ptr that let us parcourir the vector using a iterator
    for (i = v.begin(); i != v.end(); i++)
        std::cout << *i << std::endl; //testing purpose only

    std::cout << std::endl << "Test part 1: false case" << std::endl;
    try
    {
        easyfind(v, 18);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl << "Test part 2: true case" << std::endl;
    try
    {
        easyfind(v, 98);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}