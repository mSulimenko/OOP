#ifndef UNTITLED_COMMANDREADER_H
#define UNTITLED_COMMANDREADER_H
#include "Controller.h"
#include <SFML/Graphics.hpp>

class CommandReader: public Controller{
private:
    int move_direction;
public:
    CommandReader(Player* player, Field* field) : Controller(player, field){};
    void read_from_keyboard();
};
#endif //UNTITLED_COMMANDREADER_H
