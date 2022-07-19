/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:20:36 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/19 12:52:15 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

			///////////////////////////////////
			///			Canonical			///
            ///////////////////////////////////


Intern::Intern(void)              // default
{
    std::cout << "[Intern]: Default constructor called" << std::endl;
}

Intern(Intern const & fx) // copie
{
    std::cout << "[Intern]: Copy constructor called" << std::endl;
    *this = fx;
}


Intern::~Intern(void) // destructor
{
    std::cout << "[Intern]: Destructor called" << std::endl;
}        

            ///////////////////////////////////
            ///			Fonctions			///
            ///////////////////////////////////

Intern & Intern::operator=(const Intern & fx) //overload
{
    std::cout << "[Intern]: Copy assignement operator overload" << std::endl;
    (void)fx;
    return (*this);
}

Form    * makeForm(std::string nameForm, std::string targetForm)
{
    if (nameForm != "Robot request" && nameForm != "Shruberry request" && nameForm != "Presidential request")
    {
        std::cout << "Error 🚧 🚸 : Invalid form !"<< std::endl;
        return NULL;
    }
    std::string form[3]     = {"Robot request", "Shruberry request", "Presidential request"};
    // tab string of all formules
    Form *ft_ptr[3]         = { new RobotomyRequestForm(targetForm), new ShrubberyCreationForm(targetForm), new PresidentialPardonForm(targetForm)}
    //tab pointers of 3 derived/child class of Form
    int i = 0;
    while (i < 3)
    {
        if (nameForm != form[i])
            delete ft_ptr([i]);
        i++;
    }
    i = 0;
    while (i < 3)
    {
        if (nameForm == form[i])
        {
            std::cout << "[Intern]: Intern creates " << form[i] << std::endl;
            return (ft_ptr[i]);
        }
        i++;
    }
    return (NULL);
}
    
std::ostream & operator << (std::ostream & sortie, const Intern & fx)
{
    (void)fx;
    return (sortie);
}