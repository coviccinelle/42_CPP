/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 21:32:40 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/26 11:23:01 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
    int tab[3] = {3, 4, 5};
    std::string tab2[4] = {"hello", "coucou", "welcome", "home"};

    iter(tab, 3, my_function);
    iter(tab2, 4, my_function);
    return (0);
}
