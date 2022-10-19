#ifndef UNTITLED_TRAP_H
#define UNTITLED_TRAP_H

#include "EventsPlayer.h"
#include <iostream>

class Trap: public EventsPlayer{
public:

    int react(Player* player, Field* field) override;
};
#endif //UNTITLED_TRAP_H
