#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::cout << "Memory address of the string:       " << &str << '\n';

    std::string *stringPTR = &str;
    std::cout << "Memory address held by stringPTR:   " << stringPTR << '\n';

    std::string &stringREF = str;
    std::cout << "Memory address held by stringREF:   " << &stringREF << "\n\n";

    std::cout << "value of the string variable:       " << str << '\n';
    std::cout << "value pointed to by stringPTR:      " << *stringPTR << '\n';
    std::cout << "value pointed to by stringREF:      " << stringREF << '\n';
}
