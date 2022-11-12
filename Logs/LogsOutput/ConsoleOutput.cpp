#include "ConsoleOutput.h"

void ConsoleOutput::write(std::string message) {
    std::cout<< message<<std::endl;
}

std::ostream& operator << (std::ostream &os, const ConsoleOutput &p)
{
}