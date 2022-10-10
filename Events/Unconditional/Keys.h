
#ifndef UNTITLED_KEYS_H
#define UNTITLED_KEYS_H
#pragma once
#include "Unconditional.h"

class Keys: public Unconditional{
public:
    void react(Player& player) final;
    void apply(Player& player) final;
};
#endif //UNTITLED_KEYS_H
