/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:58:07 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/20 15:37:56 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"


			///////////////////////////////////
			///			Canonical			///
			///////////////////////////////////

Convert::Convert(void)
{
    this->av = NULL;
    std::cout << "[Convert]: Default Constructor called" << std::endl;
}

Convert::Convert(char *av) : av(av)
{
    std::cout << "[Convert]: Param construcctor called" << std::endl;
    return ;
}

Convert::Convert(const Convert & fx)
{
    std::cout << "[Convert]: Copy constructor called" << std::endl;
    *this = fx;
    return ;
}

Convert & Convert::operator=(const Convert & fx)
{
    this->av = fx.getArg();
    this->c = fx.getChar();
    this->i = fx.getInt();
    this->f = fx.getFloat();
    this->d = fx.getDouble();
    // assign values fx in this //
    return (*this);
}

Convert::~Convert(void)
{
    std::cout << "[Convert]: Destructor called" << std::endl;
    return ;
}


			///////////////////////////////////
			///			Functions			///
			///////////////////////////////////

char    *Convert::getArg(void) const
{
    return (this->av);
}

char    Convert::getChar(void) const
{
    return (this->c);
}

int    Convert::getInt(void) const
{
    return (this->i);
}

float    Convert::getFloat(void) const
{
    return (this->f);
}

double   Convert::getDouble(void) const
{
    return (this->d);
}

bool    isDigit(char *av)
{
    int i = 0;

    while (av[i])
    {
        if (av[i] != '.' && av[i] != 'f' && av[i] != '-' && isdigit(av[i]) == 0)
            return (false);
        i++;
    }
    return (true);
}

char    Convert::toChar(void)
{
    if (this->av[0] == 'f' && !this->av[1])
        return (0);
    if (isDigit(this->av) == true)
    {
        try
        {
            this->c = this->toInt();
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
        catch(std::invalid_argument & e)
        {
            throw Convert::Impossible(); //in case av is not accepted
        }
        if (this->c > 127 || this->c < -128) //check max char
            throw Convert::Impossible();
        if (isprint(this->c) == 0)
        {
            throw Convert::Nondisplayable();   
        }
        return (static_cast<char>(this->c));
    }
    if (this->av[1])
    {
        throw Convert::Impossible();
        return (0);
    }
    this->c = static_cast<char>(this->av[0]);
    if (this->c > 127 || this->c < - 128) // check max char
        throw Convert::Impossible();
    return (0);
}

int    Convert::toInt(void)
{
    this->i = static_cast<int>(strtod(this->av, NULL));
    //strtod returns a double (big enough for ints)
    try
    {
        if (this->i <= -2147483648 || this->i >= 2147483647)
            throw Convert::Impossible();
        else
            return (static_cast<int>(this->i));
    }
    catch(std::invalid_argument & e)
    {
        //In case av not accepted
        throw Convert::Impossible();
    }
    return (0);
}

float   Convert::toFloat(void)
{
    try
    {
        this->f = static_cast<float>(strtof(this->av, NULL));
        //strtof returns a float
        return (this->f);
    }
    catch(std::invalid_argument & e)
    {
        throw Convert::Impossible();
    }
    return (0);
}

double  Convert::toDouble(void)
{
    try
    {
        this->d = static_cast<double>(strtold(this->av, NULL)); // strtold returns a long double
        return (this->d);
    }
    catch(std::invalid_argument & e)
    {
        throw Convert::Impossible(); //av value not accepted
    }
    return (0);
}

std::ostream & operator << (std::ostream & sortie, Convert & fx)
{
    // check if type is printable
    
    // char //
    sortie << "[char] : ";
    try
    {
        std::cout << fx.toChar() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    // int //
    sortie << "[int] : ";
    try
    {
        std::cout << fx.toInt() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    // float //
    sortie << "[float] : ";
    try
    {
        std::cout << fx.toFloat() << "f" << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    // char //
    sortie << "[double] : ";
    try
    {
        std::cout << fx.toDouble() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return (sortie);
}
