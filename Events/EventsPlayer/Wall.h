
#ifndef UNTITLED_WALL_H
#define UNTITLED_WALL_H

#include "EventsPlayer.h"
#include <iostream>

class Wall: public EventsPlayer{
public:
    void react(Player* player, Field* field, Cell* cell) override;
};


#endif //UNTITLED_WALL_H
