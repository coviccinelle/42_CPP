/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 09:46:55 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/28 09:50:38 by thi-phng         ###   ########.fr       */
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
    this->vec = fx.vec;
    this->size = fx.getSize();
}

Span & Span::operator=(const Span & fx)
{
    std::cout << "[Span]: copy assignment oeprator overload constuctor called" << std::endl;
    this->vec = fx.vec;
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
    if (this->vec.size() >= this->size)
        throw Span::AlreadyFull();
    this->vec.push_back(n);
}

int             Span::shortestSpan(void)
{
    std::vector<int>::const_iterator    it;
    std::vector<int>::const_iterator    nit;
    long    tmp;

    if (this->vec.size() < 2)
        throw Span::NotFound();
    sort(this->vec.begin(), this->vec.end());
    tmp = std::abs(this->vec[0] - this->vec[1]);
    for (it = this->vec.begin(); nit != this->vec.end(); it++)
    {
        for (nit = it + 1; nit != this->vec.end(); nit++)
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

    if (this->vec.size() < 2)
        throw Span::NotFound();
    tmp = *std::max_element(this->vec.begin(), this->vec.end()) - *std::min_element(this->vec.begin(), this->vec.end());
    return (tmp);
    // https://www.cplusplus.com/reference/algorithm/min_element/
}

void            Span::SpanRangIt(int a, int b)
{
    // a: begin; b = end;
    unsigned int    to_range = b - a;
    
    if (to_range >= this->size)
        throw Span::NotFound();
    for (int i = a; i <= b; i++)
        this->vec.push_back(i);
}


void            Span::display(void) const
{
    std::vector<int>::const_iterator it;
    for (it = this->vec.begin(); it != this->vec.end(); it++)
        std::cout << *it << std::endl;
}


std::ostream & operator << (std::ostream & sortie, const Span & fx)
{
    (void)fx;
    return (sortie);
}
