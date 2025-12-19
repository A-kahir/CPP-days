#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
        return (1);
    Harl har;

    har.complain(argv[1]);
}
