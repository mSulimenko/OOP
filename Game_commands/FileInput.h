//
// Created by Max on 08.11.2022.
//

#ifndef UNTITLED_FILEINPUT_H
#define UNTITLED_FILEINPUT_H
#include <fstream>
#include "IComands.h"


class FileInput : IComand{
    std::string filepath = "commands.txt";
    std::ifstream file;
    std::string commands;
    ComandsMediator* mediator;
public:
    FileInput(ComandsMediator* mediator) {
        this->mediator = mediator;
        this->enable_file_output();
    }
    ~FileInput(){
        free_file();
    }
    bool read() override;

private:
    void free_file();
    void enable_file_output();
};
#endif //UNTITLED_FILEINPUT_H
