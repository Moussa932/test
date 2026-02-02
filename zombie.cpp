#include "../inc/zombie.hpp"

Zombie::Zombie(std::string name)
{
    this -> _name = name;
    return ;
}
Zombie::~Zombie()
{
    return ;
}

void Zombie::announce() const
{
    std::cout << this -> _name << ": BraiiiiiiinnnzzzZ...\n";
    return;
}

Zombie *newzombie(std::string str)
{
    return (new Zombie(str));

}

void randomChump( std::string name)
{
    Zombie z(name);
    z.announce();
    
}