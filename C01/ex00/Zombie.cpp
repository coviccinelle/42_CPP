#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string Name)
{
    this->name = Name;
    std::cout << "We create the zombie" << std::endl;
    return ;
}

Zombie::~Zombie()
{
    std::cout << "We destroy the zombie" << std::endl;
    return ;
}

void    Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ" << std::endl;
}
