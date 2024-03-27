#include "agrManage.hpp"
#include <iostream>
#include <string> // Pro práci s řetězci

int main(int argc, char *argv[]) {
    // Zkontrolujte, zda byl zadán argument --port a je následován číslem portu
    int port = ArgManager::getPort(argc, argv);
    if (port == -1) {
        std::cerr << "Chyba: očekává se právě 1 argument --port=cisloportu" << std::endl;
        return 1;
    }

    // Zkontrolujte, zda je přítomen argument --dev
    bool devOption = ArgManager::hasDevArgument(argc, argv);

    std::cout << "Port: " << port << std::endl;
    std::cout << "Dev volba: " << (devOption ? "true" : "false") << std::endl;

    return 0;
}
