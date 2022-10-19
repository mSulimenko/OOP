//
// Created by Max on 11.10.2022.
//

#include "Trap.h"
#include "../../Game_logic/Field.h"

int Trap::react(Player* player, Field* field) {
    player->set_death();
    std::cout << "You have lost!" << std::endl;
    return 1;
}
