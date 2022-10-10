//
// Created by Max on 10.10.2022.
//

#ifndef UNTITLED_KEYSFACTORY_H
#define UNTITLED_KEYSFACTORY_H
#pragma once
#include "Factory.h"
#include "../Events/Unconditional/Keys.h"

class KeysFactory: public Factory{
public:
    Event* create_event() final;
};

#endif //UNTITLED_KEYSFACTORY_H
