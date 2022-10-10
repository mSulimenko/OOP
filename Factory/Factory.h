//
// Created by Max on 09.10.2022.
//

#ifndef UNTITLED_FACTORY_H
#define UNTITLED_FACTORY_H
#include "../Events/Event.h"

class Factory{
public:
    virtual Event* create_event() = 0;
    virtual ~Factory(){};
};
#endif //UNTITLED_FACTORY_H
