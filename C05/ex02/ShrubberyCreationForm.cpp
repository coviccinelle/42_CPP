/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:00:27 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/17 12:01:12 by thi-phng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

			///////////////////////////////////
			///	    *** Canonical	*** 	///
			///////////////////////////////////

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyForm", 145, 137)
{
    this->_Target = "noTarget";
    std::cout << "[ShrubberyCreationForm] : Default constructor called" << std::endl;   
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyForm", 145, 137), _Target(target)
{
    std::cout << "[ShrubberyCreationForm] : Target Constructor called" << std::endl;
}

// ShrubberyCreationForm(std::string name, unsigned int grade) : Form()

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & fx) : Form(fx)
{
    std::cout << "[ShrubberyCreationForm] : Copy operator called" << std::endl;
    this->_Target = fx.getTarget();
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & fx)
{
    std::cout << "[ShrubberyCreationForm] : Operator assignment called" << std::endl;
    this->_Target = fx.getTarget();
    return (*this);
}

ShrubberyCreation::~ShrubberyCreationForm(void);
{
    std::cout << "[ShrubberyCreationFrom] : Destructor called" << std::endl;
}

			///////////////////////////////////
			///	    *** Functions	*** 	///
			///////////////////////////////////

std::string          ShrubberyCreation::getTarget(void)const
{
    return (this->_Target);
}

void ShrubberyCreation::execute(Bureaucrat const &executor) const
{
    try
    {
        this->checker_exec(executor);
    }
    catch(std::exception & e)
    {
        std::cerr << "[ShrubberyCreation] : 🚧 🚸 ERROR : Excecution corrupted because " << e.what() << '\n';
    }
    std::fstream    file; //new file to create
    std::string     name_file = this->_Target + "_shrubbery";
    file.open(name_file.c_str(), std::ios::out); //creating a new file. ios: allow output (write) to a stream
    std::string content = " \
                                              .				\n \
                                   .         ;				\n \
      .              .              ;%     ;;				\n \
        ,           ,                :;%  %;				\n \
         :         ;                   :;%;'     .,			\n \
,.        %;     %;            ;        %;'    ,;			\n \
  ;       ;%;  %%;        ,     %;    ;%;    ,%'			\n \
   %;       %;%;      ,  ;       %;  ;%;   ,%;'				\n \
    ;%;      %;        ;%;        % ;%;  ,%;'				\n \
     `%;.     ;%;     %;'         `;%%;.%;'					\n \
      `:;%.    ;%%. %@;        %; ;@%;%'					\n \
         `:%;.  :;bd%;          %;@%;'						\n \
           `@%:.  :;%.         ;@@%;'						\n \
             `@%.  `;@%.      ;@@%;							\n \
               `@%%. `@%%    ;@@%;							\n \
                 ;@%. :@%%  %@@%;							\n \
                   %@bd%%%bd%%:;							\n \
                     #@%%%%%:;;								\n \
                     %@@%%%::;								\n \
                     %@@@%(o);  . '							\n \
                     %@@@o%;:(.,'							\n \
                 `.. %@@@o%::;								\n \
                    `)@@@o%::;								\n \
                     %@@(o)::;								\n \
                    .%@@@@%::;								\n \
                    ;%@@@@%::;.								\n \
                   ;%@@@@%%:;;;.							\n \
               ...;%@@@@@%%:;;;;,..							\n";
               
    file << content;
    std::cout << "[ShrubberryCreation]: Form executed successfully!" << std::endl << std::endl;
}
