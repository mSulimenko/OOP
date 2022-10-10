
#ifndef UNTITLED_CONDITIONAL_H
#define UNTITLED_CONDITIONAL_H
#pragma once
#include "../Event.h"
#include "../../Factory/Factory.h"

class Conditional: public Event{
    virtual void apply(Player& player) = 0;
};
#endif //UNTITLED_CONDITIONAL_H
