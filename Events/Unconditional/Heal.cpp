#include "Heal.h"


void Heal::react(Player &player) {
    apply(player);
}

void Heal::apply(Player &player) {
    player.increase_health();
}
