//
// Created by Max on 11.10.2022.
//

#include "Trap.h"


void Trap::react(Player* player, Field* field) {
    player->set_death();
    std::cout << "You have lost!" << std::endl;
}
