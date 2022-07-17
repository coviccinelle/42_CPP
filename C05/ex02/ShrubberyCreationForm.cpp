/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-phng <thi-phng@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 19:00:27 by thi-phng          #+#    #+#             */
/*   Updated: 2022/07/17 13:40:29 by thi-phng         ###   ########.fr       */
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
                        . . .                               \n \
                   .        .  .     ..    .                \n \
                .                 .         .  .            \n \
                                .                           \n \
                               .                ..          \n \
               .          .            .              .     \n \
               .            '.,        .               .    \n \
               .              'b      *                     \n \
                .              '$    #.                ..   \n \
               .    .           $:   #:               .     \n \
             ..      .  ..      *#  @):        .   . .      \n \
                          .     :@,@):   ,.**:'   .         \n \
              .      .,         :@@*: ..**'      .   .      \n \
                       '#o.    .:(@'.@*"'  .                \n \
               .  .       'bq,..:,@@*'   ,*      .  .       \n \
                          ,p$q8,:@)'  .p*'      .           \n \
                   .     '  . '@@Pp@@*'    .  .             \n \
                    .  . ..    Y7'.'     .  .               \n \
                              :@):.                         \n \
                             .:@:'.                         \n \
                           .::(@:.                          \n\n\n \
                                                            \n \
               ,@@@@@@@,                                     \n \
       ,,,.   ,@@@@@@/@@,  .oo8888o.                         \n \
    ,&%%&%&&%,@@@@@/@@@@@@,8888\88/8o                        \n \
   ,%&\%&&%&&%,@@@\@@@/@@@88\88888/88'                       \n \
   %&&%&%&/%&&%@@\@@/ /@@@88888\88888'                       \n \
   %&&%/ %&%%&&@@\ V /@@' `88\8 `/88'                        \n \
   `&%\ ` /%&'    |.|        \ '|8'                          \n \
       |o|        | |         | |                            \n \
       |.|        | |         | |                            \n \
    \\/ ._\\/_/__/  ,\\_/__\\/.  \\_/__/_\                   \n \n \n \
888                                                         \n \
888                                                         \n \
888                                                         \n \
888888888d888 .d88b.  .d88b.                                \n \
888   888P"  d8P  Y8bd8P  Y8b                               \n \
888   888    8888888888888888                               \n \
Y88b. 888    Y8b.    Y8b.                                   \n \
 "Y888888     "Y8888  "Y8888                                \n \
                                                            \n \n \n\
888                                                         \n \
888                                                         \n \
888                                                         \n \
888888888d888 .d88b.  .d88b.                                \n \
888   888P"  d8P  Y8bd8P  Y8b                               \n \
888   888    8888888888888888                               \n \
Y88b. 888    Y8b.    Y8b.                                   \n \
 "Y888888     "Y8888  "Y8888                                \n \
                                                            \n \n \n\
888                                                         \n \
888                                                         \n \
888                                                         \n \
888888888d888 .d88b.  .d88b.                                \n \
888   888P"  d8P  Y8bd8P  Y8b                               \n \
888   888    8888888888888888                               \n \
Y88b. 888    Y8b.    Y8b.                                   \n \
 "Y888888     "Y8888  "Y8888                                \n \
                                                            \n \n \n \
              _{\ _{\{\/}/}/}__                             \n \
             {/{/\}{/{/\}(\}{/\} _                          \n \
            {/{/\}{/{/\}(_)\}{/{/\}  _                      \n \
         {\{/(\}\}{/{/\}\}{/){/\}\} /\}                      \n \
        {/{/(_)/}{\{/)\}{\(_){/}/}/}/}                       \n \
       _{\{/{/{\{/{/(_)/}/}/}{\(/}/}/}                       \n \
      {/{/{\{\{\(/}{\{\/}/}{\}(_){\/}\}                      \n \
      _{\{/{\{/(_)\}/}{/{/{/\}\})\}{/\}                      \n \
     {/{/{\{\(/}{/{\{\{\/})/}{\(_)/}/}\}                     \n \
      {\{\/}(_){\{\{\/}/}(_){\/}{\/}/})/}                    \n \
       {/{\{\/}{/{\{\{\/}/}{\{\/}/}\}(_)                     \n \
      {/{\{\/}{/){\{\{\/}/}{\{\(/}/}\}/}                     \n \
       {/{\{\/}(_){\{\{\(/}/}{\(_)/}/}\}                     \n \
         {/({/{\{/{\{\/}(_){\/}/}\}/}(\}                     \n \                    
          (_){/{\/}{\{\/}/}{\{\)/}/}(_)                      \n \
            {/{/{\{\/}{/{\{\{\(_)/}                          \n \
             {/{\{\{\/}/}{\{\\}/}                            \n \
              {){/ {\/}{\/} \}\}                             \n \
              (_)  \.-'.-/                                   \n \
          __...--- |'-.-'| --...__                           \n \
   _...--"   .-'   |'-.-'|  ' -.  ""--..__                   \n \
 -"    ' .  . '    |.'-._| '  . .  '                         \n \      
 .  '-  '    .--'  | '-.'|    .  '  . '                      \n \
          ' ..     |'-_.-|                                   \n \
  .  '  .       _.-|-._ -|-._  .  '  .                       \n \
              .'   |'- .-|   '.                              \n \
  ..-'   ' .  '.   `-._.-�   .'  '  - .                      \n \
   .-' '        '-._______.-'     '  .                       \n \
        .      ~,                                            \n \
    .       .   |\   .    ' '-.                              \n \
    ___________/  \____________                              \n \
   /  Why is it, when you want \                             \n \
  |  something, it is so damn   |                            \n \
  |    much work to get it?     |                            \n \
   \___________________________/                             \n \
                                                             \n \
                                                             \n \                           
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
