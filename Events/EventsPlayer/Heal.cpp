#include "Heal.h"

void Heal::react(Player *player, Field *field, Cell* cell) {
    player->increase_health();
    std::cout<<"Amount of health:" << player->get_health() << std::endl;
}
