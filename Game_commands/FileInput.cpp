#include "FileInput.h"
#include "iostream"
bool FileInput::enable_file_output()
{
    file.open(filepath);
    if (file.is_open())
    {
        return true;
    }
    return false;
}

void FileInput::free_file()
{
    if (file)
    {
        file.close();
    }
}

bool FileInput::read() {
    char temp;
    int i = 0;
    while(file.get(temp)){
        for(auto c : commands)
            if(c==temp) {
                commands.clear();
                return false;
            }
        commands.push_back(temp);
        i++;
    }

    if(i != 4) {
        commands.clear();
        return false;
    }
    return true;
}

std::string FileInput::get_commands() {
    return commands;
}

void FileInput::set_standard_commands() {
    commands = "wsad";
}
