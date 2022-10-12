//
// Created by Max on 12.10.2022.
//

#include "Exit.h"

void Exit::react(Player *player, Field *field) {
    player->set_win(true);
}
