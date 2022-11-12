#include "File.h"

bool File::enable_file_output()
{
    file.open(filepath);
    if (file.is_open())
    {
        return true;
    }
    return false;
}

void File::free_file()
{
    if (file)
    {
        file.close();
    }
}

std::ostream& operator << (std::ostream &os, const File &p)
{

}

void File::write(std::string message) {
    if (file){
        file  <<message <<std::endl;
    }

}

