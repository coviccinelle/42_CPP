/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 13:44:21 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/14 14:42:41 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
    std::cout << "[Bureaucrat]: Default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const & fx)
{
    std::cout << "[Bureaucrat]: Copy constructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=()