//
// Created by Max on 09.10.2022.
//

#ifndef UNTITLED_ENEMY_H
#define UNTITLED_ENEMY_H
#pragma once
#include "Conditional.h"

class Enemy: public Conditional{
    void react(Player& player) final;
    void apply(Player& player) final;
};
#endif //UNTITLED_ENEMY_H
