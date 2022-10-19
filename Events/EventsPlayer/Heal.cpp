//
// Created by Max on 10.10.2022.
//

#include "Heal.h"





int Heal::react(Player *player, Field *field) {
    player->increase_health();
    std::cout<<"Amount of health:" << player->get_health() << std::endl;
    return 1;
}
