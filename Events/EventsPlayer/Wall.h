
#ifndef UNTITLED_WALL_H
#define UNTITLED_WALL_H

#include "EventsPlayer.h"
#include <iostream>

class Wall: public EventsPlayer{
public:

    int react(Player* player, Field* field) override;
};


#endif //UNTITLED_WALL_H
