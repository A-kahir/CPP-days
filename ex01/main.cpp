#include <iostream>

int main(int argc, char **argv)
{
    if (argc != 1)
        return (1);

    std::cout << "Welcome to your PhoneBook\n you can use commands ADD or SEARCH or EXIT\n";
    Contact Cont;
    while (1)
    {
        std::cout << "Set A command :"
        if (!getline(std::cin, line))
            return (1);
        if (line == "ADD")
        {
            PhoneBook.set_first_name(line);
        }
    }
}
