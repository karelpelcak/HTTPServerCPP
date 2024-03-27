#include "argManager.hpp"
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
    int port = ArgManager::getPort(argc, argv);
    if (port == -1) {
        std::cerr << "Chyba: očekává se právě 1 argument --port=cisloportu" << std::endl;
        return 1;
    }

    bool devOption = ArgManager::hasDevArgument(argc, argv);

    std::cout << "Port: " << port << std::endl;
    std::cout << "Dev volba: " << (devOption ? "true" : "false") << std::endl;

    return 0;
}
