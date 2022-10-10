//
// Created by Max on 10.10.2022.
//

#ifndef UNTITLED_EXITFACTORY_H
#define UNTITLED_EXITFACTORY_H
#pragma once
#include "Factory.h"
#include "../Events/Conditional/Exit.h"

class ExitFactory: public Factory{
public:
    Event* create_event() final;
};

#endif //UNTITLED_EXITFACTORY_H
