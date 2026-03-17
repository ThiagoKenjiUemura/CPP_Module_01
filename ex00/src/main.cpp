#include "Zombie.hpp"

int main(void)
{
   std::cout << "--- Criando zumbi com randomChump (Stack) ---" << std::endl;
   randomChump("Stack_Zombie");

   std::cout << "\n--- Criando zumbi com newZombie (Heap) ---" << std::endl;
   Zombie* heapZombie = newZombie("Heap_Zombie");
   heapZombie->announce();

   std::cout << "Deleting heap zombie manually" << std::endl;
   return (0);
}
