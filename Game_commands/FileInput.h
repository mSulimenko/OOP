//
// Created by Max on 08.11.2022.
//

#ifndef UNTITLED_FILEINPUT_H
#define UNTITLED_FILEINPUT_H
#include <fstream>



class FileInput{
    std::string filepath = "commands.txt";
    std::ifstream file;
    std::string commands;
public:
    FileInput() {
        file.open(filepath);
        this->enable_file_output();
    }
    ~FileInput(){

        free_file();
    }
    bool read();
    void set_standard_commands();
    std::string get_commands();
private:
    void free_file();
    bool enable_file_output();
};
#endif //UNTITLED_FILEINPUT_H
