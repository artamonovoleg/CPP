#include <iostream>
#include "Pony.hpp"

void ponyOnTheHeap( void )
{
    Pony * pony = new Pony( "A" );
    std::cout << "ptr" << pony << "\n";
    delete pony;
};

void ponyOnTheStack( void )
{
    Pony pony = Pony( "B" );
    std::cout << "ptr" << &(pony) << "\n";
};

int main()
{
    ponyOnTheHeap();
    ponyOnTheStack();
    // Pony pony = Pony();
}