#include "Logger.h"


void Logger::add_output(ILogsOutput* output) {
    logsOutput.push_back(output);
}
void Logger::add_level(ILogLevel *level) {
    logsLevels.push_back(level);
}

void Logger::output() {
    for(auto & j : logsLevels){
        for(auto & i : logsOutput){
            if(j->get_message() != ""){
                i->write(j->get_name());
            }
        }
    }

    for(auto & j : logsLevels){
        j->clear_message();
    }
}


