//
// Created by Max on 12.10.2022.
//

#ifndef UNTITLED_ENEMY_H
#define UNTITLED_ENEMY_H
#include "EventsField.h"


class Enemy:public EventsField{
    int react(Player* player, Field* field) override;
};
#endif //UNTITLED_ENEMY_H
