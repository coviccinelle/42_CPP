/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 09:48:22 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/28 15:51:10 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span	span(5);

	span.addNumber(658);
	span.addNumber(45);
	span.addNumber(62);
	span.addNumber(77);
	span.addNumber(34);
	try{
		span.addNumber(98);
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}
	try{
		span.addNumber(28);
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}

	std::cout << "The shortest number in Span is " << span.shortestSpan() << std::endl;
	std::cout << "The longest number in Span is " << span.longestSpan() << std::endl;

	std::cout << std::endl << "---Display [Span] ---" << std::endl;
	span.display();
	std::cout << std::endl;

	std::cout << std::endl << "--- Test with [Empty Span] ---" << std::endl <<std::endl;

	Span	emptySpan;
	try{
		emptySpan.shortestSpan();
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}

	try{
		emptySpan.longestSpan();
	}
	catch (std::exception & e){
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "--- Display [Empty Span]---" << std::endl;	
	emptySpan.display();

	std::cout << std::endl << "---- Main in Subject ----" << std::endl;

    
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    
    std::cout << "Shortest span is : " << sp.shortestSpan() << std::endl;// -> bug
    std::cout << "Longest span is : " << sp.longestSpan() << std::endl;

	#ifdef DEBUG
		std::cout << std::endl << "--- Another test ---" << std::endl;
		Span sp2 = Span(150);
		std::cout << "We just created a span with N = 150" << std::endl;
		std::cout << "-------------------------------" << std::endl;
		std::cout << "Let's add the numbers (in one function call)!" << std::endl;
		sp2.SpanRangeIt(0, 149);
		std::cout << "-------------------------------" << std::endl;
		std::cout << "Let's display the span" << std::endl;
		sp2.display();
		std::cout << "-------------------------------" << std::endl;
		std::cout << "Shortest span is : " << sp2.shortestSpan() << std::endl;// -> bug
    	std::cout << "Longest span is : " << sp2.longestSpan() << std::endl;
	#endif

    return 0;
}