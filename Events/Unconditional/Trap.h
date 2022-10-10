#ifndef UNTITLED_TRAP_H
#define UNTITLED_TRAP_H
#pragma once
#include "Unconditional.h"

class Trap: public Unconditional{
    void react(Player& player) final;
    void apply(Player& player) final;
};
#endif //UNTITLED_TRAP_H
