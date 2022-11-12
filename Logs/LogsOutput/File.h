#ifndef UNTITLED_FILE_H
#define UNTITLED_FILE_H
#include "ILogsOutput.h"
#include <fstream>

class File: public ILogsOutput{
private:
    std::string filepath = "logs.txt";
    std::ofstream file;

public:
    File(){
        this->enable_file_output();
    }
    ~File(){
        free_file();

    }

    void write(std::string message) override;

private:
    void free_file();
    bool enable_file_output();

};
#endif //UNTITLED_FILE_H
