/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 21:46:39 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/23 10:31:17 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstdlib>
#include <time.h>

class A : public Base{};
class B : public Base{};
class C : public Base{};

Base    *generate(void)
{
    int     n;

    srand(time(NULL)); //-> init random seed
    n = rand() % 3;
    if (n == 0)
    {
        Base *ptr = new A;
        return (ptr);
    }
    else if (n == 1)
    {
        Base *ptr = new B;
        return (ptr);
    }
    else if (n == 2)
    {
        Base *ptr = new C;
        return (ptr);
    }
    return (NULL);
}

void    identity(Base *p)
{
    std::cout << "Identity pointer function" << std::endl;
    
    A   *a = dynamic_cast<A *>(p);
    B   *b = dynamic_cast<B *>(p);
    C   *c = dynamic_cast<C *>(p);

    if (a != NULL)
        std::cout << "Object's type is A" << std::endl << std::endl;
    else if (b != NULL)
        std::cout << "Object's type is B" << std::endl << std::endl;
    else if (c != NULL)
        std::cout << "Object's type is C" << std::endl << std::endl;
}

void    identity(Base &p)
{
    std::cout << "Reference identity function" << std::endl;

    try
    {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "Object's type is A" << std::endl << std::endl;
    }
    catch(...){;}

    try
    {
        B &b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "Object's type is B" << std::endl << std::endl;
    }
    catch(...){;}

    try
    {
        C &c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "Object's type is C" << std::endl << std::endl;
    }
    catch(...){;}
}


int main(void)
{
    Base *ptr = generate();
    identity(ptr);

    Base &ref = *ptr;
    identity(ref);

    delete ptr;
    
    return (0);
}