cmake_minimum_required(VERSION 3.23)
project(untitled)

set(CMAKE_CXX_STANDARD 23)

add_executable(untitled main.cpp Field.h Field.cpp Cell.cpp Cell.h Event.cpp Event.h Player.cpp Player.h Drawfield.cpp Drawfield.h Controller.cpp Controller.h CommandReader.cpp CommandReader.h)

set(SFML_DIR "C:\\Users\\79832\\CLionProjects\\lib\\sfml\\GCC 7.3.0 MinGW (SEH) - 64-bit\\SFML-2.5.1\\lib\\cmake\\SFML")

target_link_libraries(untitled sfml-graphics sfml-audio)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML 2.5 REQUIRED graphics network audio window system)