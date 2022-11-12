#include "Gun.h"

void Gun::react(Player *player, Field *field, Cell* cell) {
    player->increase_strength();
    std::cout<<"Your srength has been increased" << std::endl;
}
