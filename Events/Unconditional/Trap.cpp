//
// Created by Max on 09.10.2022.
//

#include "Trap.h"

void Trap::apply(Player &player) {
    player.set_death();
}

void Trap::react(Player &player) {
    apply(player);
}
