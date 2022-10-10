//
// Created by Max on 09.10.2022.
//

#include "Keys.h"

void Keys::apply(Player& player) {
    player.increase_keys();
}

void Keys::react(Player& player) {
    apply(player);
}
