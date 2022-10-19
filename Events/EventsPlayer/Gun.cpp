//
// Created by Max on 12.10.2022.
//

#include "Gun.h"

int Gun::react(Player *player, Field *field) {
    player->increase_strength();
    std::cout<<"Your srength has been increased" << std::endl;
    return 1;
}
