#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie 
{
    private:
    public:
        Zombie( std::string name, std::string type );
        std::string name;
        std::string type;
};

#endif