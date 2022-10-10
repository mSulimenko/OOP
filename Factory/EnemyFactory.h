
#ifndef UNTITLED_ENEMYFACTORY_H
#define UNTITLED_ENEMYFACTORY_H
#pragma once
#include "Factory.h"
#include "../Events/Conditional/Enemy.h"

class EnemyFactory: public Factory{
public:
    Event* create_event() final;
};

#endif //UNTITLED_ENEMYFACTORY_H
