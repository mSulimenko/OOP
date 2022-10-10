//
// Created by Max on 10.10.2022.
//

#include "TrapFactory.h"

Event *TrapFactory::create_event() {
    return new Trap;
}
