#ifndef UNTITLED_COMMANDREADER_H
#define UNTITLED_COMMANDREADER_H
#include "Controller.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include "conio.h"
#include <string>

class CommandReader: public Controller{
private:
    int move_direction = Stop;
    std::string commands;
public:
    CommandReader(Player* player, Field* field, const std::string& commands) : Controller(player, field){
        this->commands = commands;
    };
    void read_from_keyboard();

};
#endif //UNTITLED_COMMANDREADER_H