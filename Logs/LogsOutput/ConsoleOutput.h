#ifndef UNTITLED_CONSOLEOUTPUT_H
#define UNTITLED_CONSOLEOUTPUT_H
#include "ILogsOutput.h"
#include <fstream>

class ConsoleOutput: public ILogsOutput{
public:
    void write(std::string message) override;

};
#endif //UNTITLED_CONSOLEOUTPUT_H
