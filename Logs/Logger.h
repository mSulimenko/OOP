#ifndef UNTITLED_LOGGER_H
#define UNTITLED_LOGGER_H
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdio>
#include <vector>
#include "LogsLevels/GameLog.h"
#include "LogsLevels/InfoLog.h"
#include "LogsLevels/ErrorLog.h"
#include "LogsLevels/ILogsLevel.h"
#include "LogsOutput/ConsoleOutput.h"
#include "LogsOutput/File.h"
#include "LogsOutput/ILogsOutput.h"


class Logger
{
private:
    std::vector<ILogsOutput*> logsOutput;
    std::vector<ILogLevel*> logsLevels;
public:
    void add_output(ILogsOutput* output);
    void add_level(ILogLevel *level);
    void output();

};


#endif //UNTITLED_LOGGER_H
