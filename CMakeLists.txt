cmake_minimum_required(VERSION 3.10)
project(HttpServer)

add_executable(main main.cpp Logger/Logger.cpp argManager/argManager.cpp)
