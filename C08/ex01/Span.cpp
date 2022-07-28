/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 09:46:55 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/28 15:24:04 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Span.hpp"


			///////////////////////////////////
			///			Canonical			///
			///////////////////////////////////

Span::Span(void) : size(0)
{}

Span::Span(unsigned int n) : size(n)
{}

Span::Span(Span const & fx)
{
    std::cout << "[Span]: copy constuctor called" << std::endl;
    this->numbers = fx.numbers;
    this->size = fx.getSize();
}

Span & Span::operator=(const Span & fx)
{
    std::cout << "[Span]: copy assignment oeprator overload constuctor called" << std::endl;
    this->numbers = fx.numbers;
    this->size = fx.getSize();
    return (*this);
}

Span::~Span(void)
{}

			///////////////////////////////////
			///			Fonction			///
			///////////////////////////////////


void            Span::addNumber(int n)
{
    if (this->numbers.size() >= this->size)
        throw Span::AlreadyFull();
    this->numbers.push_back(n);
}


int             Span::shortestSpan(void)
{
    std::vector<int>::const_iterator    it;
    std::vector<int>::const_iterator    nit;
    long    tmp;

    if (this->numbers.size() < 2)
        throw Span::NotFound();
    sort(this->numbers.begin(), this->numbers.end()); //sort in oders and then compare
    tmp = std::abs(this->numbers[0] - this->numbers[1]);
    for (it = this->numbers.begin(); it != this->numbers.end(); it++)
    {
        for (nit = it + 1; nit != this->numbers.end(); nit++)
        {
            if (tmp > static_cast<long>(abs(*it - *nit)))
                tmp = static_cast<long>(abs(*it - *nit));
        }
    }
    return (tmp);
}

int             Span::longestSpan(void)
{
    int     tmp;

    if (this->numbers.size() < 2)
        throw Span::NotFound();
    tmp = *std::max_element(this->numbers.begin(), this->numbers.end()) - *std::min_element(this->numbers.begin(), this->numbers.end());
    return (tmp);
}
// https://www.cplusplus.com/reference/algorithm/min_element/


//to set random number from a to b
void            Span::SpanRangIt(int a, int b)
{
    // a: begin; b = end;
    unsigned int    to_range = b - a;
    
    if (to_range >= this->size)
        throw Span::NotFound();
    for (int i = a; i <= b; i++)
        this->numbers.push_back(i);
}


void            Span::display(void) const
{
    std::vector<int>::const_iterator it;
    for (it = this->numbers.begin(); it != this->numbers.end(); it++)
        std::cout << *it << std::endl;
}


std::ostream & operator << (std::ostream & sortie, const Span & fx)
{
    (void)fx;
    return (sortie);
}
