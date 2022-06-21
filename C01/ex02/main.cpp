/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 20:42:48 by thi-phng          #+#    #+#             */
/*   Updated: 2022/06/21 11:41:12 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main()
{
	std::string Str = "HI THIS IS BRAIN";
	
	std::string	*stringPtr = &Str; //A pointer
	
	std::string	&stringRef = Str; //Ref is pretty much an alias of Str

	std::cout << "The memory address of the string variable is : " << &Str << std::endl;
	std::cout << "The memory address held by stringPTR is : " << &stringPtr << std::endl;
	std::cout << "The memory address held by stringREF is : " << &stringRef << std::endl;
	
	std::cout << "Wait! It's not done yet..." << std::endl << std::endl;
	std::cout << "And then..." << std::endl << std::endl;
	std::cout << "The value of the string variable is : " << Str << std::endl;
	std::cout << "The value pointed to by stringPTR is : " << *stringPtr << std::endl;
	std::cout << "The value pointed to by stringREF is : " << stringRef << std::endl;

	
	std::cout  << std::endl << "That's enough brain for today. Byeeee !" << std::endl;
	


	return (0);
}
