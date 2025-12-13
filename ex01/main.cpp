#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(int argc, char **argv)
{
    if (argc != 1)
        return (1);
    (void)argv;
    
    std::cout << "Welcome to your PhoneBook\n you can use commands ADD or SEARCH or EXIT\n\n";
    std::string cmd;
    PhoneBook Phone;
    while (1)
    {
        std::cout << "Set a command$~: ";
        if (!std::getline(std::cin, cmd))
            return (1);
        if (cmd == "ADD")
        {
            Phone.add_new();
        }
        else if (cmd == "SEARCH")
        {
            if (Phone.search() == 1)
                return (1);
        }
        else if (cmd == "EXIT")
        {
            break ;
        }
        else
            std::cout << "  => You can use only : ADD or SEARCH or EXIT <=\n";
    }
}
