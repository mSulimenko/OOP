#include "FileInput.h"
#include "iostream"
void FileInput::enable_file_output()
{
    file.open(filepath);
}

void FileInput::free_file()
{
    if (file)
    {
        file.close();
    }
}

bool FileInput::read(){
    if(!file.is_open()) return false;
    getline(file, commands);
    mediator->set_comands(commands);
    return true;
}
