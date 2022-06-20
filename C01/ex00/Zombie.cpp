#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string Name)
{
    this->name = Name;
    std::cout << "Loading... creating a zombie" << std::endl;
    return ;
}

Zombie::~Zombie()
{
    std::cout << "Loading... destroying a zombie" << std::endl << std::endl;
    return ;
}

void    Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ" << std::endl;
}
