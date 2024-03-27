#include <iostream>
#include "agrManage.hpp"

int main(int argc, char *argv[]) {
    int port = ArgManager::getPort(argc, argv);
    if (port == -1) {
        return 1; 
    }

    std::cout << "Hodnota portu: " << port << std::endl;

    return 0;
}
