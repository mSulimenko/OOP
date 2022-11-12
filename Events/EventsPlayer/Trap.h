#ifndef UNTITLED_TRAP_H
#define UNTITLED_TRAP_H

#include "EventsPlayer.h"
#include <iostream>

class Trap: public EventsPlayer{
public:

    void react(Player* player, Field* field, Cell* cell) override;
};
#endif //UNTITLED_TRAP_H
