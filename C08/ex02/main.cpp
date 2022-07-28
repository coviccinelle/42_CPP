/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 21:42:45 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/28 21:37:28 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
	std::cout << ".........stack........." << std::endl;
	
	{
		MutantStack<int> mstack;

		mstack.push(5);
		mstack.push(17);
		std::cout << "The top of the elements is " << mstack.top() << std::endl;

		mstack.pop(); //pop the top element
        std::cout << "Poped the top element ! ✅" << std::endl;
		std::cout << "The size is " << mstack.size() << std::endl;

		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::itero it = mstack.begin();
		MutantStack<int>::itero ite = mstack.end();
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}

	std::cout << ".........list........." << std::endl;

	{
		std::list<int> mstack;

		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << "The top of the elements is " << mstack.back() << std::endl;

		mstack.pop_back();
        std::cout << "Poped the top element ! ✅" << std::endl;
		std::cout << "The size is = " << mstack.size() << std::endl;

		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);

		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	return 0;
}
