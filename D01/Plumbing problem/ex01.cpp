#include <iostream>
#include <string>

void memoryLeak()
{
    std::string* panthere = new std::string("String panthere"); // String panthere

    delete panthere;
}

int main()
{
    memoryLeak();
}