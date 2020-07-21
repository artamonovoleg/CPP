#include "ZombieEvent.hpp"


ZombieEvent::ZombieEvent()
{
    current_type = "NONE";
}

void ZombieEvent::setZombieType( std::string type )
{
    current_type = type;
}

Zombie * ZombieEvent::newZombie( std::string name )
{
    Zombie * ret = new Zombie(name, current_type);
}