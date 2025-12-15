#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
    index = 0;
}

int PhoneBook::index_contact(void)
{
    int current;

    current = index;
    index++;

    if (index == 8)
        index = 0;
    return (current);
}

int PhoneBook::get_index(void) const
{
    return (index);
}

void PhoneBook::advan_index(void)
{
    index++;
    if (index == 8)
        index = 0;
}


int PhoneBook::add_new(void)
{
    int i;

    i = get_index();
    if (contact[i].set_data() == 1)
    {
        std::cout << "Contact not added\n";
        return (1);
    }
    advan_index();
    return (0);
}


std::string format_field(std::string str)
{
    if (str.length() > 10)
        return (str.substr(0, 9) + ".");
    return (str);
}


int PhoneBook::search(void)
{
    std::cout << "---------------------------------------------\n";
    std::cout << "|     Index|First Name| Last Name| Nickname |\n";
    std::cout << "---------------------------------------------\n";
    if (!contact[0].get_first_name().empty())
    {
        for (int i = 0; i < 8; i++)
        {
            if (contact[i].get_first_name().empty())
                continue;
            std::cout << "|" << std::setw(10) << i << "|"
            << std::setw(10) << format_field(contact[i].get_first_name()) << "|"
            << std::setw(10) << format_field(contact[i].get_last_name()) << "|"
            << std::setw(10) << format_field(contact[i].get_nickname()) << "|\n";
        }
        std::cout << "---------------------------------------------\n";

        std::cout << "   Set index for more infos : ";
        std::string input;
        if (!getline(std::cin, input))
            return (1);
        if (input.length() != 1 || !isdigit(input[0]))
        {
            std::cout << "            - Wrong index\n";
            return (0);
        }
        int value = input[0] - '0';
        if (value < 0 || value > 7)
        {
            std::cout << "            - Wrong index\n";
            return (0);
        }
        std::cout << "- First Name     : " << contact[value].get_first_name() << '\n';
        std::cout << "- Last Name      : " << contact[value].get_last_name() << '\n';
        std::cout << "- Nickname       : " << contact[value].get_nickname() << '\n';
        std::cout << "- Phone Number   : " << contact[value].get_phone_nb() << '\n';
        std::cout << "- Darkest Secret : " << contact[value].get_darkest_secret() << '\n';
    }
    else
        std:: cout << "             - Empty Contact -\n";
    return (0);
}
