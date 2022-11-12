#ifndef UNTITLED_ILOGSOUTPUT_H
#define UNTITLED_ILOGSOUTPUT_H
#include <iostream>

class ILogsOutput{
public:
    virtual void write(std::string message) = 0;
};
#endif //UNTITLED_ILOGSOUTPUT_H
