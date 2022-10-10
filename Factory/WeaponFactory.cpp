//
// Created by Max on 10.10.2022.
//

#include "WeaponFactory.h"

Event *WeaponFactory::create_event() {
    return new Weapon;
}
