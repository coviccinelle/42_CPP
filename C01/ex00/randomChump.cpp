#include "Zombie.hpp"
#include <iostream>

// in the heap
void    randomChump(std::string name)
{
    Zombie  zomb(name);

    zomb.announce();
}
