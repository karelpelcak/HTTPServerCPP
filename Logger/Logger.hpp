#include <string>
#include <iostream>
#include <chrono>
#include <ctime>
#include <iomanip>
#include <sstream>


class Logger{
    public:
        static void Info(std::string text);
        static void Warn(std::string text);
        static void Error(std::string text);
        static void Success(std::string text);
    private:
        static std::string GetCurrentTime();
};