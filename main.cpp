#include "argManager/argManager.hpp"
#include <iostream>
#include <string>
#include "Logger/Logger.hpp"

int main(int argc, char *argv[]) {
    int port = ArgManager::getPort(argc, argv);
    if (port == -1) {
        std::cerr << "Chyba: očekává se právě 1 argument --port=cisloportu" << std::endl;
        return 1;
    }

    bool devOption = ArgManager::hasDevArgument(argc, argv);

    std::cout << "Port: " << port << std::endl;
    Logger::Info("Port: " + std::to_string(port));
    Logger::Info("Dev: " + (devOption ? std::string("true") : std::string("false")));

    Logger::Error("Logging error");
    Logger::Success("Logging success");
    Logger::Warn("Logging warning");
    return 0;
};