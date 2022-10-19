//
// Created by Max on 12.10.2022.
//

#include "Exit.h"

int Exit::react(Player *player, Field *field) {
    player->set_win(true);
    return 1;
}
