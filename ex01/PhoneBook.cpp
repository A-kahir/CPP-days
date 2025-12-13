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

int PhoneBook::get_index(void)
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
        return str.substr(0, 9) + ".";
    return (str);
}


int PhoneBook::search(void)
{
    std::cout << "---------------------------------------------\n";
    std::cout << "|     Index|First Name| Last Name|  Nickname|\n";
    std::cout << "---------------------------------------------\n";

    for (int i = 0; i < 8; i++)
    {
        if (contact[i].get_first_name().empty())
            continue;

        std::cout << "|"
                  << std::setw(10) << i << "|"
                  << std::setw(10) << format_field(contact[i].get_first_name()) << "|"
                  << std::setw(10) << format_field(contact[i].get_last_name()) << "|"
                  << std::setw(10) << format_field(contact[i].get_nickname()) << "|\n";
    }
    std::cout << "---------------------------------------------\n";

    return (0);
}
