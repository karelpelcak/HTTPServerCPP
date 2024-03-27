#include "agrManage.hpp"
#include "agrManage.hpp"
#include <cstring>
#include <iostream>

int ArgManager::getPort(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cerr << "Chyba: očekává se právě 1 argument (např. ./main --port=446)" << std::endl;
        return -1;
    }

    if (std::strncmp(argv[1], "--port=", 7) != 0)
    {
        std::cerr << "Chyba: očekává se argument --port" << std::endl;
        return -1;
    }

    char *portString = argv[1] + 7;

    int port = std::stoi(portString);
    return port;


if (argc != 3)
{
    std::cerr << "Chyba: očekává se přesně 2 argumenty (např. ./main --port=446)" << std::endl;
    return -1;
}

if (std::strcmp(argv[1], "--port") != 0)
{
    std::cerr << "Chyba: očekává se argument --port" << std::endl;
    return -1;
}

portString = argv[2];
port = std::stoi(portString);
return port;
}
