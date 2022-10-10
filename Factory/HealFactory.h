//
// Created by Max on 10.10.2022.
//

#ifndef UNTITLED_HEALFACTORY_H
#define UNTITLED_HEALFACTORY_H

#pragma once
#include "Factory.h"
#include "../Events/Unconditional/Heal.h"

class HealFactory: public Factory{
public:
    Event* create_event() final;
};


#endif //UNTITLED_HEALFACTORY_H
