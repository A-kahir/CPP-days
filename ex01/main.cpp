#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(int argc, char **argv)
{
    (void)argv;
    if (argc != 1)
        return (1);

    std::cout << "Welcome to your PhoneBook\n you can use commands ADD or SEARCH or EXIT\n";
    std::string cmd;
    PhoneBook phone;
    while (1)
    {
        std::cout << "Set a command :";
        if (!std::getline(std::cin, cmd))
            return (1);
        if (cmd == "ADD")
        {
            std::cout << "ADD=====>\n";
        }
        else if (cmd == "SEARCH")
        {
            std::cout << "SEARCHH=====>\n";
        }
        else if (cmd == "EXIT")
        {
            break ;
        }
        else
            std::cout << "You can use only : ADD or SEARCH or EXIT\n";
    }
}
