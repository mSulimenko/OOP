//
// Created by Max on 12.10.2022.
//

#ifndef UNTITLED_GUN_H
#define UNTITLED_GUN_H
#include "EventsPlayer.h"

class Gun: public EventsPlayer{
public:
    void react(Player* player, Field* field) override;
};
#endif //UNTITLED_GUN_H
