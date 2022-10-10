//
// Created by Max on 10.10.2022.
//

#include "KeysFactory.h"

Event *KeysFactory::create_event() {
    return new Keys;
}
