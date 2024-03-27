#ifndef ARG_MANAGE_HPP
#define ARG_MANAGE_HPP

#include <string>

class ArgManager {
public:
    static int getPort(int argc, char *argv[]);
    static bool hasDevArgument(int argc, char *argv[]);
};
#endif
