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
    ComandsMediator* mediator;
public:
    CommandReader(Player* player, Field* field, ComandsMediator* mediator) : Controller(player, field){
        this->mediator = mediator;
    };
    void read_from_keyboard();

};
#endif //UNTITLED_COMMANDREADER_H