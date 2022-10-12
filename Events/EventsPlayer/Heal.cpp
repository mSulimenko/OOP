//
// Created by Max on 10.10.2022.
//

#include "Heal.h"





void Heal::react(Player *player, Field *field) {
    player->increase_health();
    std::cout<<"Amount of helth:" << player->get_health() << std::endl;

}
