
#include "Weapon.h"

void Weapon::apply(Player &player) {
    player.increase_strength();
}

void Weapon::react(Player &player) {
    apply(player);
}
