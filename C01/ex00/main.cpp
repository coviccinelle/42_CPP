#include "Zombie.hpp"


int main(void)
{
    std::cout << "We enter in randomChump" << std::endl;
    randomChump("OK");
    std::cout << "We get out of randomChump" << std::endl;

    std::cout << std::endl << "We enter in newZombie" << std::endl;
    Zombie *main_zombie = newZombie("mini_zombie");
    std::cout << "We get out of newZombie" << std::endl;


  main_zombie->announce();
    
  //il meurt ici
  delete main_zombie;
    

   
    return (0);
}
