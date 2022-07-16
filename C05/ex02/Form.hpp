/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:37:19 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/16 20:01:13 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    public:
        Form(void);                  //default
        Form(std::string name, int SignGrade, int ExecGrade);
        Form(const Form & fx);       //copy
        virtual ~Form(void);         //destructor

            // *** Fucnction *** //
        Form            & operator=(const Form & fx); //overload
        void            beSigned(Bureaucrat bur);
        virtual void    execute(Bureaucrat const & executor) const = 0;
        void            checker_exec(Bureaucrat cosnt & bur) const;
        
            // *** Get functions *** //
        std::string getNameForm(void)const;
        bool        getSign(void)const;
        int         getSignGrade(void)const;
        int         getExecGrade(void)const;

            // *** Set function *** //
        void        setSign(bool sign);

            // *** EXCEPTION *** //
        class FormNotSignedException: public std::exception
        {
            virtual const char * what() const throw()
            {
                return ("[Status]:🚨💣 This form is not signed yet ! Please go sign it");
            }
        };

        class FormAlreadySignedException: public std::exception
        {
            virtual const char * what() const throw()
            {
                return ("[Status]:✅👌 This form is already signed ! You good to go (😘 From Already signed)");   
            }
        };
        
    protected:
    
    private:
        std::string const   _Name;
        bool                _Signed;
        int const           _signGrade;
        int const           _ExecGrade;
};

std::ostream & operator << (std::ostream & sortie, const Form & fx);