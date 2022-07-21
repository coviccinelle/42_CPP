/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 11:20:37 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/21 21:10:18 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <iostream>
#include <stdint.h>

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
    Data        *data = new Data(10);
    uintptr_t   u = 0;
    //->uintptr_t might be the same size as a void* . It might be larger. It could conceivably be smaller
    
    // first function : unintptr_t serialize(Data *ptr) -> convert ptr of data to an unsigned int uintptr_t
    std::cout << std::endl << "The pointer of data is : " << data << std::endl;
    u = serialize(data);
    std::cout << "The tmp pointer of uintptr_t is : " << u << std::endl <<std::endl;
    
    //second ft : Data *deserialize(uintptr_t raw) --> convert raw to data
    std::cout << "Now we recast u to Data * -> we'll have the pointer : ";
    std::cout << deserialize(u) << std::endl;
    std::cout << "Euhhhh should be the same pointer 👀 " << std::endl << std::endl;

    //third ft : tester -> use serialize on data and give the return value to deserialize
    std::cout << "Same thing here but we'll call serialize inside of deserialize without using tmp u" << std::endl;
    std::cout << "The pointer here is : " << deserialize(serialize(data)) << std::endl;
    std::cout << "Same pointer! Yayyy" << std::endl << std::endl;
    
    delete data;
    return (0);
}