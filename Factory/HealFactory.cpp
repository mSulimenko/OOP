//
// Created by Max on 10.10.2022.
//

#include "HealFactory.h"

Event *HealFactory::create_event() {
    return new Heal;
}
