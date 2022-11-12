//
// Created by Max on 20.10.2022.
//

#ifndef UNTITLED_EMPTY_H
#define UNTITLED_EMPTY_H
#include "EventsPlayer.h"
#include <iostream>

class Empty: public EventsPlayer{
public:

    void react(Player* player, Field* field, Cell* cell) override;
};

#endif //UNTITLED_EMPTY_H
