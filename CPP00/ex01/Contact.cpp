#include "PhoneBook.hpp"
#include "Contact.hpp"

Contact::Contact()
{
    first_name = "";
    last_name = "";
    nickname = "";
    phone_nb = "";
    darkest_secret = "";
}

std::string Contact::get_first_name(void) const
{
    return (this->first_name);
}

std::string Contact::get_last_name(void) const
{
    return (this->last_name);
}

std::string Contact::get_nickname(void) const
{
    return (this->nickname);
}

std::string Contact::get_phone_nb(void) const
{
    return (this->phone_nb);
}

std::string Contact::get_darkest_secret(void) const
{
    return (this->darkest_secret);
}

int Contact::set_data(void)
{
    std::string first;
    std::string last;
    std::string nick;
    std::string nb;
    std::string sec;

    std::cout << "   Set your First Name: ";
    if (!std::getline(std::cin, first))
        return (1);
    if (first.empty())
        return (1);
    for (unsigned long i = 0; i < first.size(); i++)
    {
        if (!isprint(first[i]) || isspace(first[i]) || isdigit(first[i]) || !isalpha(first[i]))
        {
            std::cout << "ERROR\n";
            return (1);
        }
    }

    std::cout << "   Set your Last Name: ";
    if (!std::getline(std::cin, last))
        return (1);
    if (last.empty())
    {
        std::cout << "ERROR\n";
        return (1);
    }
    for (unsigned long i = 0; i < last.size(); i++)
    {
        if (!isprint(last[i]) || isspace(last[i]) || isdigit(last[i]) || !isalpha(last[i]))
        {
            std::cout << "ERROR\n";
            return (1);
        }
    }
    
    std::cout << "   Set your Nickname: ";
    if (!std::getline(std::cin, nick))
        return (1);
    if (nick.empty())
    {
        std::cout << "ERROR\n";
        return (1);
    }
    for (unsigned long i = 0; i < nick.size(); i++)
    {
        if (!isprint(nick[i]) || isspace(nick[i]) || isdigit(nick[i]) || !isalpha(nick[i]))
        {
            std::cout << "ERROR\n";
            return (1);
        }
    }

    std::cout << "   Set your Phone Number: ";
    if (!std::getline(std::cin, nb))
        return (1);
    if (nb.empty())
    {
        std::cout << "ERROR\n";
        return (1);
    }
    for (unsigned long i = 0; i < nb.size(); i++)
    {
        if (!isprint(nb[i]) || isspace(nb[i]) || !isdigit(nb[i]) || nb.size() != 10)
        {
            std::cout << "ERROR\n";
            return (1);
        }
    }

    std::cout << "   Set your Darkest Secret: ";
    if (!std::getline(std::cin, sec))
        return (1);
    if (sec.empty())
    {
        std::cout << "ERROR\n";
        return (1);
    }
    for (unsigned long i = 0; i < sec.size(); i++)
    {
        if (!isprint(sec[i]) || isspace(sec[i]))
        {
            std::cout << "ERROR\n";
            return (1);
        }
    }
    this->first_name = first;
    this->last_name = last;
    this->nickname = nick;
    this->phone_nb = nb;
    this->darkest_secret = sec;

    std::cout << "Your Contact is added\n";
    return (0);
}
