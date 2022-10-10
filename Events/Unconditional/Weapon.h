#ifndef UNTITLED_WEAPON_H
#define UNTITLED_WEAPON_H
#include "Unconditional.h"

class Weapon:public Unconditional{
public:
    void apply(Player& player) final;
    void react(Player& player) final;
};
#endif //UNTITLED_WEAPON_H
