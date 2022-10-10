
#ifndef UNTITLED_HEAL_H
#define UNTITLED_HEAL_H
#include "Unconditional.h"

class Heal: public Unconditional{
public:
    void apply(Player& player) final;
    void react(Player& player) final;
};
#endif //UNTITLED_HEAL_H
