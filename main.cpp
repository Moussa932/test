#include "../inc/zombie.hpp"

int main()
{
   Zombie *z;

   z = newzombie("BATMAN");
   z->announce();
   delete z;
   randomChump("SUPERMAN");
}