#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
        return (1);
    }
    int i = 1;
    while (argv[i])
    {
        std::string str(argv[i]);
        for (int j = 0; j < (int)str.length(); j++)
        {
            std::cout << (char)toupper(str[j]);
        }
        i++;  
    }
    std::cout << '\n';
}
