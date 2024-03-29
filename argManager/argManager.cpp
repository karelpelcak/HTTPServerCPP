#include "argManager.hpp"
#include <cstring>

int ArgManager::getPort(int argc, char *argv[]) {
    for (int i = 1; i < argc; ++i) {
        if (std::strncmp(argv[i], "--port=", 7) == 0) {
            char *portString = argv[i] + 7;
            return std::stoi(portString);
        }
    }
    return -1;
}

bool ArgManager::hasDevArgument(int argc, char *argv[]) {
    for (int i = 1; i < argc; ++i) {
        if (std::strcmp(argv[i], "--dev") == 0) {
            return true;
        }
    }
    return false;
}