/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 21:46:06 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/25 22:01:56 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}

// int main (void)
// {
// 	std::cout << ".........Int........." << std::endl;
// 	Array<int>	intArray(3);

// 	intArray[0] = 10;
// 	intArray[1] = 20;
// 	intArray[2] = 30;


// 	std::cout << intArray << std::endl;
// 	Array<int> intcopy(intArray);
// 	std::cout << intcopy << std::endl;
	
// 	intArray[0] = 1;
// 	intArray[1] = 2;
// 	intArray[2] = 3;
// 	try{
// 		intArray[10] = 4;
// 	}
// 	catch (std::exception & e) {
// 		std::cout << e.what() << std::endl;
// 	}
// 	std::cout << intArray << std::endl;
// 	Array<int>	intArray2;
// 	intArray2 = intArray;
// 	std::cout << intArray2 << std::endl;


// 	std::cout << std::endl << ".........String........." << std::endl;
// 	Array<std::string> stringArray(5);
// 	stringArray[0] = "qwerty";
// 	stringArray[1] = "azerty";
// 	stringArray[2] = "Bonjour";
// 	stringArray[3] = "Hello";
// 	stringArray[4] = "Hola";
// 	try{
// 		stringArray[45] = "Aloha";
// 	}
// 	catch (std::exception & e ){
// 		std::cout << e.what() << std::endl;
// 	}
// 	std::cout << stringArray << std::endl;
	
// 	return (0);
// }

// // *** https://www.youtube.com/watch?v=ZudCUY2oNKg
// // *** Tuto how to make a classe template
