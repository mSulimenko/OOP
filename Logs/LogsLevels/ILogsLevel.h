#ifndef UNTITLED_ILOGSLEVEL_H
#define UNTITLED_ILOGSLEVEL_H
#include <iostream>
#include "../Message.h"
#include "../../Game_logic/Field.h"
#include "../../Game_logic/Player.h"

class ILogLevel{
public:
    virtual void update_message() = 0;
    virtual std::string get_name() = 0;
    virtual void clear_message() = 0;
    virtual std::string get_message() = 0;
};
#endif //UNTITLED_ILOGSLEVEL_H
