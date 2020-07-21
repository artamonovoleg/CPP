#include <iostream>

int main(int argc, char * argv [])
{   
    if (argc > 1)
    {
        for(int i = 0; argv[1][i] != '\0'; i++)
        {
            if (int (argv[1][i]) >= 'a' && int (argv[1][i]) <= 'z')
            {
                argv[1][i] = char ( int (argv[1][i]) - ('a' - 'A'));
            }
        }
        std::cout << argv[1] << std::endl;
    }
    else
        std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE" << std::endl;
}
