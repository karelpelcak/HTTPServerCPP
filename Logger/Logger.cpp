#include "Logger.hpp"

void Logger::Info(std::string text)
{
    std::string currentTime = GetCurrentTime();
    std::cout << "[" + currentTime + "] " << "\033[36m[INFO]\033[0m " << text << std::endl;
}
void Logger::Warn(std::string text) {
    std::string currentTime = GetCurrentTime();
    std::cout << "[" + currentTime + "] " << "\033[33m[WARNING]\033[0m " << text << std::endl;
}
void Logger::Error(std::string text) {
    std::string currentTime = GetCurrentTime();
    std::cout << "[" + currentTime + "] " << "\033[31m[ERROR]\033[0m " << text << std::endl;
}
void Logger::Success(std::string text) {
    std::string currentTime = GetCurrentTime();
    std::cout << "[" + currentTime + "] " << "\033[32m[SUCCESS]\033[0m " << text << std::endl;
}
std::string Logger::GetCurrentTime()
{
    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
    std::time_t now_time = std::chrono::system_clock::to_time_t(now);
    struct std::tm* timeinfo = std::localtime(&now_time);
    std::ostringstream oss;
    oss << std::put_time(timeinfo, "%Y-%m-%d %H:%M:%S");
    return oss.str();
};