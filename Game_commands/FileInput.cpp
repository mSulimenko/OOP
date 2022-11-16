#include "FileInput.h"
#include "iostream"
void FileInput::enable_file_output()
{
    file.open(filepath);
    if(!file.is_open()) std::cout << "File not opened!\n";

}

void FileInput::free_file()
{
    if (file)
    {
        file.close();
    }
}

void FileInput::read() {
    getline(file, commands);
    mediator->set_comands(commands);
}
