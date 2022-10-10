//
// Created by Max on 10.10.2022.
//

#ifndef UNTITLED_TRAPFACTORY_H
#define UNTITLED_TRAPFACTORY_H
#pragma once
#include "Factory.h"
#include "../Events/Unconditional/Trap.h"

class TrapFactory: public Factory{
public:
    Event* create_event() final;
};

#endif //UNTITLED_TRAPFACTORY_H
