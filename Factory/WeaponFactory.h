#ifndef UNTITLED_WEAPONFACTORY_H
#define UNTITLED_WEAPONFACTORY_H

#pragma once
#include "Factory.h"
#include "../Events/Unconditional/Weapon.h"

class WeaponFactory: public Factory{
public:
    Event* create_event() final;
};


#endif //UNTITLED_WEAPONFACTORY_H
