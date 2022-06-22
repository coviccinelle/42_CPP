/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/22 11:51:56 by thi-phng          #+#    #+#             */
/*   Updated: 2022/06/22 12:34:05 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main()
{
    std::ifstream   ifs("test3.txt");
    unsigned int    dst;
    unsigned int    dst2;
    
    ifs >> dst >> dst2;

    std::cout << dst << " " << dst2 << std::endl;
    ifs.close();
    
    //----------------------------

    std::ofstream   ofs("test.out");
    
    // ofs << "I like rice so much =))" << std::endl;
    ofs << "I like ponies a whole damn lot" << std::endl;
    ofs.close();
}