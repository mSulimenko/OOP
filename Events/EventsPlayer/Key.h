//
// Created by Max on 12.10.2022.
//

#ifndef UNTITLED_KEY_H
#define UNTITLED_KEY_H
#include "EventsPlayer.h"

class Key: public EventsPlayer{
public:
    void react(Player* player, Field* field) override;
};
#endif //UNTITLED_KEY_H
