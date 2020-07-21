#ifndef ZOMBIE_EVENT_HPP
#define ZOMBIE_EVENT_HPP

#include <string>
#include "Zombie.hpp"
class ZombieEvent
{
    private:
    public:
        std::string current_type;
        void setZombieType( std::string type );
        Zombie * newZombie( std::string name );
};

#endif