//
// Created by Max on 10.10.2022.
//

#ifndef UNTITLED_HEAL_H
#define UNTITLED_HEAL_H

#include "EventsPlayer.h"


class Heal: public EventsPlayer{
public:
    void react(Player* player, Field* field, Cell* cell) override;
};
#endif //UNTITLED_HEAL_H
