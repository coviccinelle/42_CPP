/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 21:46:20 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/21 21:53:54 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base(void)
{
    std::cout << "[Base]: Constructor called" << std::endl;
}

Base::~Base(void)
{
    std::cout << "[Base]: Destructor called" << std::endl;
}
